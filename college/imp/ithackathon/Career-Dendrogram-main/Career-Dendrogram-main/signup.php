<!doctype html>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css" integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh" crossorigin="anonymous">

    <title>Signup Page</title>
</head>

<body onload="configure();">

<?php
$showAlert = false;
$showError = false;
if($_SERVER["REQUEST_METHOD"] == "POST"){
    $servername = "localhost";
    $username = "root";
    $password = "";
    $database = "login_info";
    $conn = mysqli_connect($servername, $username, $password, $database);
    if (!$conn) {
        die("Sorry connection failed" . mysqli_connect_error());
    }else {
        $name = $_POST['name'];
        $email = $_POST['email'];
        $pass = $_POST['password'];
    // $exists=false;

    // Check whether this username exists
        $existSql = "SELECT * FROM `user_info` WHERE Name = '$name'";
        $result = mysqli_query($conn, $existSql);
        $numExistRows = mysqli_num_rows($result);
        if($numExistRows > 0){
        // $exists = true;
            $showError = "Username Already Exists";
        }
        else{
        // $exists = false; 
            $hash = password_hash($pass, PASSWORD_DEFAULT);
            $sql = "INSERT INTO `user_info` ( `Sno.`,`Name`, `Email`, `Password`) VALUES ( NULL,'$name', '$email', '$hash')";
            $result = mysqli_query($conn, $sql);
            if ($result){
                header("location: home.html");
            }else {
                echo '<div class="alert alert-danger alert-dismissible fade show" role="alert">
                <strong>Failure!</strong> We are facing some technical issue. Your data can not be submitted! Sorry for the inconvinience caused!!
                <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                <span aria-hidden="true">×</span>
                </button>
                </div>';
            }
        }    
    }
}
    
?>

<?php
    if($showError){
    echo ' <div class="alert alert-danger alert-dismissible fade show" role="alert">
        <strong>Error!</strong> '. $showError.'
        <button type="button" class="close" data-dismiss="alert" aria-label="Close">
            <span aria-hidden="true">&times;</span>
        </button>
    </div> ';
    }
?>

    <div class="container mt-3">
        <h1>Please SignUP</h1>
        <form action="/sih/Career Dendrogram/src/com/sayan/signup.php" method="post">
            <div class="form-group">
                <label for="name">Name</label>
                <input type="text" name="name" maxlength="11" class="form-control" id="name" aria-describedby="emailHelp">
                <small id="emailHelp" class="form-text text-muted">We'll never share your info with anyone else.</small>
            </div>
            <div class="form-group">
                <label for="email">Email address</label>
                <input type="email" name="email" class="form-control" id="email" aria-describedby="emailHelp">
                <small id="emailHelp" class="form-text text-muted">We'll never share your email with anyone else.</small>
            </div>
            <div class="form-group">
                <label for="password">Password</label>
                <input type="password" class="form-control" id="password" name="password" maxlength="11">
            </div>

            <button type="submit" class="btn btn-primary">Sign Up</button>
        </form>
    </div>
    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.4.1.slim.min.js" integrity="sha384-J6qa4849blE2+poT4WnyKhv5vZF5SrPo0iEjwBvKU7imGFAV0wwj1yYfoRSJoZ+n" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js" integrity="sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuUD4Ih7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6" crossorigin="anonymous"></script>
</body>

</html>