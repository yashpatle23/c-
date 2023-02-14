<?php include('include/openconfig.php'); ?>

<?php

	if(isset($_GET['id'])){

		$sendId=$_GET['id'];
	}

 ?>

<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="utf-8">
  <meta content="width=device-width, initial-scale=1.0" name="viewport">

  <title>Blog - Sailor Bootstrap Template</title>
  <meta content="" name="description">
  <meta content="" name="keywords">

  <!-- Favicons -->
  <link href="assets/img/favicon.png" rel="icon">
  <link href="assets/img/apple-touch-icon.png" rel="apple-touch-icon">

  <!-- Google Fonts -->
  <link href="https://fonts.googleapis.com/css?family=Open+Sans:300,300i,400,400i,600,600i,700,700i|Raleway:300,300i,400,400i,500,500i,600,600i,700,700i|Poppins:300,300i,400,400i,500,500i,600,600i,700,700i" rel="stylesheet">

  <!-- Vendor CSS Files -->
  <link href="assets/vendor/animate.css/animate.min.css" rel="stylesheet">
  <link href="assets/vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
  <link href="assets/vendor/bootstrap-icons/bootstrap-icons.css" rel="stylesheet">
  <link href="assets/vendor/boxicons/css/boxicons.min.css" rel="stylesheet">
  <link href="assets/vendor/glightbox/css/glightbox.min.css" rel="stylesheet">
  <link href="assets/vendor/remixicon/remixicon.css" rel="stylesheet">
  <link href="assets/vendor/swiper/swiper-bundle.min.css" rel="stylesheet">

  <!-- Template Main CSS File -->
  <link href="style.css" rel="stylesheet">
  <link href="assets/css/style.css" rel="stylesheet">


  <style>
  </style>

</head>

<body>

  <!-- ======= Header ======= -->
  <header id="header" class="fixed-top d-flex align-items-center">
    <div class="container d-flex align-items-center">

      <h1 class="logo me-auto"><a href="index.html">Sailor</a></h1>
      <!-- Uncomment below if you prefer to use an image logo -->
      <!-- <a href="index.html" class="logo me-auto"><img src="assets/img/logo.png" alt="" class="img-fluid"></a>-->

      <nav id="navbar" class="navbar">
        <ul>
          <li><a href="index.html">Home</a></li>

          <li class="dropdown"><a href="#"><span>About</span> <i class="bi bi-chevron-down"></i></a>
            <ul>
              <li><a href="about.html">About</a></li>
              <li><a href="team.html">Team</a></li>
              <li><a href="testimonials.html">Testimonials</a></li>

              <li class="dropdown"><a href="#"><span>Deep Drop Down</span> <i class="bi bi-chevron-right"></i></a>
                <ul>
                  <li><a href="#">Deep Drop Down 1</a></li>
                  <li><a href="#">Deep Drop Down 2</a></li>
                  <li><a href="#">Deep Drop Down 3</a></li>
                  <li><a href="#">Deep Drop Down 4</a></li>
                  <li><a href="#">Deep Drop Down 5</a></li>
                </ul>
              </li>
            </ul>
          </li>
          <li><a href="services.html">Services</a></li>
          <li><a href="portfolio.html">Portfolio</a></li>
          <li><a href="pricing.html">Pricing</a></li>
          <li><a href="blog.php" class="active">Blog</a></li>

          <li><a href="contact.html">Contact</a></li>
          <li><a href="index.html" class="getstarted">Get Started</a></li>
        </ul>
        <i class="bi bi-list mobile-nav-toggle"></i>
      </nav><!-- .navbar -->

    </div>
  </header><!-- End Header -->




















  <div id="page-menu">

			<div id="page-menu-wrap">

			</div>

		</div><!-- #page-menu end -->

<section id="content">

			<div class="content-wrap">

				<div class="container clearfix">

					<!-- ===============Post Content============= -->
					<div class="postcontent nobottommargin clearfix">

						<!-- ===================Posts============== -->
						<div id="posts">

				<?php 

						if(isset($sendId)){
							$query = "SELECT * FROM `blog` WHERE id='$sendId' ";
						}else{
							$query = "SELECT * FROM `blog` ORDER BY id DESC limit 1";
						}

				$result = mysqli_query($connection, $query);

        		if(mysqli_num_rows($result) > 0){
        
         			while( $row = mysqli_fetch_assoc($result) ){ 
         					$postId = $row['id'];
         					$status =  $row["status"]; 
            			    $post = $row["post"];
                			$title = $row["title"]; 
             			    $content = $row["postContent"];
             			    $adminPost = $row["admin"];
             			    $postDate = $row["postDate"];

				$query2 = "SELECT * FROM `admin` WhERE id='$adminPost'";

				$result2 = mysqli_query($connection, $query2);

        		if(mysqli_num_rows($result2) > 0){         			

        		while( $row2 = mysqli_fetch_assoc($result2) ){
        				$adminName = $row2['name'];
        		}} else { $adminName = 'Exceptional Programmers';}	


					if($status=='image'){			
							echo'<div class="entry clearfix">
								<div class="entry-image">
									<img style=" height: 500px;" class="image_fade" src="gotoep/images/blog/'.$post.'" alt="Exceptional">
								</div>';					
					}else{

						echo'<div class="entry clearfix">
								<div class="entry-image" style=" height:450px;">
								
								<iframe width="560" height="315" src="https://www.youtube.com/embed/'.$post.'" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
								</div>';
							
					}
						echo'<div class="entry-title">
									<h2>'.$title.'</h2>
								</div>
								<ul class="entry-meta clearfix">
									<li><i class="icon-calendar3"></i>'.$postDate.'</li>
									<li><i class="icon-user"></i>'.$adminName.'</li>

								</ul>
								<div class="entry-content">
									<p>'.$content.'</p>
									
								</div>
							</div>';	
         			}

         		}else{
         			echo '<div class="section notopmargin notopborder">
					<div class="container clearfix">
						<div class="heading-block center nomargin">
							<h3>Post not available</h3>
							</div>
						</div>
					</div>';
         		}


		?>
							


							

						</div><!-- #posts end -->

						
					</div><!-- .postcontent end -->


<!--**************************************************************************** -->

				<div id="posts" class="post-grid grid-container clearfix nobottommargin nobottommargin">

				<!-- php code -->

				<?php

				$query = "SELECT * FROM `blog` ORDER BY id DESC limit 8";

				$result = mysqli_query($connection, $query);

        		if(mysqli_num_rows($result) > 0){
        
         			while( $row = mysqli_fetch_assoc($result) ){ 
         					$postId = $row['id'];
         					$status =  $row["status"]; 
            			    $post = $row["post"];
                			$title = $row["title"]; 
             			    $content = $row["postContent"];
             			    $adminPost = $row["admin"];
             			    $postDate = $row["postDate"];

				$query2 = "SELECT * FROM `admin` WhERE id='$adminPost'";

				$result2 = mysqli_query($connection, $query2);

        		if(mysqli_num_rows($result2) > 0){         			

        		while( $row2 = mysqli_fetch_assoc($result2) ){
        				$adminName = $row2['name'];
        		}} else { $adminName = 'Exceptional Programmers';}	


					if($status=='image'){			
						echo'<div class="clearfix">
							<div class="entry-image">
								<a href="blog.php?id='.$postId.'"><img class="image_fade" src="gotoep/images/blog/'.$post.'" alt="Post"></a>
							</div>';						
					}else{

						echo'<div class="clearfix">
							<div class="entry-image">
								<a href="blog.php?id='.$postId.'" data-lightbox="image">
								 <iframe width="150px" height="150px" src="https://www.youtube.com/embed/'.$post.'" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></a>
							</div>';
						
					}			
							echo'<div class="entry-title">
								<h2><a href="blog.php?id='.$postId.'">'.$title.'</a></h2>
							</div>
							<ul class="entry-meta clearfix">
								<li><i class="icon-calendar3"></i>'.$postDate.'</li>
								<li><i class="icon-user"></i>'.$adminName.'</li>
							</ul>
							<div class="entry-content">
								<a href="blog.php?id='.$postId.'" class="more-link">Read More</a>
							</div>
						</div>';		
         			}

         		}else{
         			echo '<div class="section notopmargin notopborder">
					<div class="container clearfix">
						<div class="heading-block center nomargin">
							<h3>Posts are not available Yet</h3>
							</div>
						</div>
					</div>';
         		}

			
			?>
		
						</div>
					</div><!-- #posts end -->
<!--**************************************************************-->
	
				</div> <!-- container -->

		</section><!-- #content end -->






















  <!-- ======= Footer ======= -->
  <footer id="footer">
    <div class="footer-top">
      <div class="container">
        <div class="row">

          <div class="col-lg-3 col-md-6">
            <div class="footer-info">
              <h3>Sailor</h3>
              <p>
                A108 Adam Street <br>
                NY 535022, USA<br><br>
                <strong>Phone:</strong> +1 5589 55488 55<br>
                <strong>Email:</strong> info@example.com<br>
              </p>
              <div class="social-links mt-3">
                <a href="#" class="twitter"><i class="bx bxl-twitter"></i></a>
                <a href="#" class="facebook"><i class="bx bxl-facebook"></i></a>
                <a href="#" class="instagram"><i class="bx bxl-instagram"></i></a>
                <a href="#" class="google-plus"><i class="bx bxl-skype"></i></a>
                <a href="#" class="linkedin"><i class="bx bxl-linkedin"></i></a>
              </div>
            </div>
          </div>

          <div class="col-lg-2 col-md-6 footer-links">
            <h4>Useful Links</h4>
            <ul>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Home</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">About us</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Services</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Terms of service</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Privacy policy</a></li>
            </ul>
          </div>

          <div class="col-lg-3 col-md-6 footer-links">
            <h4>Our Services</h4>
            <ul>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Web Design</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Web Development</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Product Management</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Marketing</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Graphic Design</a></li>
            </ul>
          </div>

          <div class="col-lg-4 col-md-6 footer-newsletter">
            <h4>Our Newsletter</h4>
            <p>Tamen quem nulla quae legam multos aute sint culpa legam noster magna</p>
            <form action="" method="post">
              <input type="email" name="email"><input type="submit" value="Subscribe">
            </form>

          </div>

        </div>
      </div>
    </div>

    <div class="container">
      <div class="copyright">
        &copy; Copyright <strong><span>Sailor</span></strong>. All Rights Reserved
      </div>
      <div class="credits">
        <!-- All the links in the footer should remain intact. -->
        <!-- You can delete the links only if you purchased the pro version. -->
        <!-- Licensing information: https://bootstrapmade.com/license/ -->
        <!-- Purchase the pro version with working PHP/AJAX contact form: https://bootstrapmade.com/sailor-free-bootstrap-theme/ -->
        Designed by <a href="https://bootstrapmade.com/">BootstrapMade</a>
      </div>
    </div>
  </footer><!-- End Footer -->

  <a href="#" class="back-to-top d-flex align-items-center justify-content-center"><i class="bi bi-arrow-up-short"></i></a>

  <!-- Vendor JS Files -->
  <script src="assets/vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
  <script src="assets/vendor/glightbox/js/glightbox.min.js"></script>
  <script src="assets/vendor/isotope-layout/isotope.pkgd.min.js"></script>
  <script src="assets/vendor/swiper/swiper-bundle.min.js"></script>
  <script src="assets/vendor/waypoints/noframework.waypoints.js"></script>
  <script src="assets/vendor/php-email-form/validate.js"></script>

  <!-- Template Main JS File -->
  <script src="assets/js/main.js"></script>

</body>

</html>