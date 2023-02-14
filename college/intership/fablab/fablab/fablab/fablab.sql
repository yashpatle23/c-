-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 21, 2022 at 08:11 AM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `fablab`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE `admin` (
  `id` int(11) NOT NULL,
  `name` varchar(255) NOT NULL,
  `admin_mail` varchar(50) NOT NULL,
  `password` varchar(255) NOT NULL,
  `profilePic` varchar(255) NOT NULL,
  `type` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`id`, `name`, `admin_mail`, `password`, `profilePic`, `type`) VALUES
(1, 'Sahil Mohurale', 'sahilmohurale03@gmail.com', '16da662f5b2c9b402b7e01250a071c0a', '1664467148.jpg', 'yes'),
(5, 'Priya kriplani', 'priyakriplani950@gmail.com', 'cd13c4e02e79438e7a8c7f2d9f18cd61', '1666088177.jpg', 'yes');

-- --------------------------------------------------------

--
-- Table structure for table `blog`
--

CREATE TABLE `blog` (
  `id` int(11) NOT NULL,
  `postContent` text NOT NULL,
  `postDate` varchar(20) NOT NULL,
  `admin` int(11) NOT NULL,
  `title` varchar(255) NOT NULL,
  `status` text NOT NULL,
  `post` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `blog`
--

INSERT INTO `blog` (`id`, `postContent`, `postDate`, `admin`, `title`, `status`, `post`) VALUES
(4, 'I hope you enjoy printing and playing with this articulated Axolotl .stl file! My goal was to create a cute critter with carefully designed articulations that will pose nicely, wiggle just right, and put smiles on peoples faces. Print it in different sizes, colors, or create unique paint jobs to make your own unique Axolotl family!\r\n\r\n*This is a DIGITAL DOWNLOAD, not a physical Print. If you want an already printed version, they are available to purchase from Authorized Sellers here on Etsy and on the web.\r\n**Due to Etsy\'s digital file size limit, upon purchase you will get a PDF file that contains a Download Link to the purchased STL files.\r\n\r\n\r\nHere is a quick video showing the easiest method for snap-fitting the head onto the body: https://youtu.be/DWsYu2BY7ow\r\n\r\n\r\nPLEASE READ:\r\nAll MatMire_Makes Designs are protected under Copyright Law.\r\nYour purchase gives you the right to download and print the design for your personal use. You do NOT have permission to resell or redistribute those digital files in ANY way. This includes altered or \"remixed\" versions of the designs. Prints of the design cannot be sold without authorization.\r\n\r\nTo legally sell PRINTS of my designs, you can obtain authorization by joining my Patreon page: https://www.patreon.com/matmire_makes\r\n\r\n\r\nIncludes 4 STL files:\r\n- Head (Easily Snap-Fit to Body, Requires Supports)\r\n- Body with Pre-Supported Tail & Custom Brims (recommended)\r\n- Body with Custom Brims (Print-in-Place, Brim geo is built in so no need to generate one.)\r\n- Body (Print-In-Place, No Supports - aside from a brim/raft for bed adhesion, if needed. Use one of the above versions if having adhesion issues.)\r\n\r\n*I added two additional versions of the Body. One with custom, compact, brim shapes built into the model. This will use less material than a standard brim, and puts it in the spots where it is most helpful. The other has the same custom brim shapes, but also adds built in support meshes, that protect and support the tail during printing. Give them a try if you are having adhesion issues. If the brim shapes aren\'t showing up in your slice, try lowering your Initial/First Layer Height. If you have already purchased this file, you can redownload this update from your \"Downloads\" page.\r\n\r\n*Note, there are several small, detached, pieces underneath the head. These are there for two reasons. 1) They hold the head at the correct height above the buildplate, so that the supports cradle the head properly. 2) They block supports from filling in some of the cavities around the ball joint, to make support removal easier.\r\n\r\n15-20% Infill.\r\n3 Walls.\r\n\r\nFor a demonstration of how I use Cura\'s support blockers to print the Head and Body at the same time, please check out this video. It\'s super easy!\r\nhttps://tinyurl.com/mr3zkyue\r\n\r\nScale to your liking! 100% creates a 10\" Axolotl, so that will make it easy to scale it to your desired size. (80% = 8\", 75% = 7.5\", etc.) Depending on your printer tolerances, you should be able to print close to 60-65% before the joint function may start to become compromised. YMMV', 'October 20, 2022', 1, 'Articulated Axolotl .STL Digital File, Print-in-Place Body, Snap-Fit Head, Cute Flexi', 'image', '1666280992.png'),
(5, 'With Halloween around the corner, its time to start printing decorations!\r\n\r\nSandman 3D Printing gives you the Halloween Happy Pumpkin! This happy pumpkin is sure to bring a smile to everyone\'s face this Halloween!!\r\n\r\nThis file includes three stls:\r\n\r\n- Pumpkin with Legs\r\n\r\n- Pumpkin with no Legs\r\n\r\n- Pumpkin with no Legs key chain\r\n\r\nThe settings I used are listed below:\r\n\r\n- Layer Height: 0.25 mm\r\n\r\n- Wall Thickness: 1.2 mm\r\n\r\n- Infill: 10% with 1 Gradual Steps\r\n\r\n- Print Temp: 215 Degrees Celsius\r\n\r\n- Build Plate Temp: 75 Degrees Celsius\r\n\r\n- Print Speed: 70 mm/s\r\n\r\nSupport: Yes for the Pumpkin with legs and for the Key Chain Pumpkin', 'October 20, 2022', 1, 'Halloween Happy Pumpkin STL', 'image', '1666281426.png');

-- --------------------------------------------------------

--
-- Table structure for table `categories`
--

CREATE TABLE `categories` (
  `id` int(11) NOT NULL,
  `categorie` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `categories`
--

INSERT INTO `categories` (`id`, `categorie`) VALUES
(1, 'AIDS'),
(2, 'Computer Science'),
(3, 'HTML');

-- --------------------------------------------------------

--
-- Table structure for table `content`
--

CREATE TABLE `content` (
  `id` int(11) NOT NULL,
  `content` text NOT NULL,
  `courseId` int(11) NOT NULL,
  `lectureName` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `content`
--

INSERT INTO `content` (`id`, `content`, `courseId`, `lectureName`) VALUES
(1, '<p style=\"text-align:center\">&nbsp;</p>\r\n\r\n<p><span style=\"font-size:8px\"><iframe align=\"middle\" frameborder=\"0\" height=\"157\" scrolling=\"no\" src=\"https://www.youtube.com/embed/nDAjmLcyiIc\" title=\"YouTube video player\" width=\"280\"></iframe></span></p>\r\n\r\n<p style=\"text-align:center\"><span style=\"font-size:24px\"><span style=\"color:#4e5f70\">Student Registration System Login Panel Part 1</span></span></p>\r\n\r\n<p>Student Management System | Student Registration System in Java Complete Project Complete student registration system. In this project you will learn how to create a project in short time period. How to insert, retrieve, delete, update and search data in java. How to make connection with SQL XAMPP in java? Facebook: https://www.facebook.com/ExceptionalProgrammers/</p>\r\n', 1, 'Student registration system  Login Panel Part One');

-- --------------------------------------------------------

--
-- Table structure for table `course`
--

CREATE TABLE `course` (
  `id` int(11) NOT NULL,
  `name` text NOT NULL,
  `cover` varchar(255) NOT NULL,
  `description` text NOT NULL,
  `categorieId` int(11) NOT NULL,
  `instructorId` int(11) NOT NULL,
  `bookId` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `course`
--

INSERT INTO `course` (`id`, `name`, `cover`, `description`, `categorieId`, `instructorId`, `bookId`) VALUES
(1, 'Student Registration System', '1665296315.jpg', 'Student Management System | Student Registration System in Java Complete Project\r\n\r\nComplete student registration system. In this project you will learn how to create a project in short time period. How to insert, retrieve, delete, update and search data in java. How to make connection with SQL XAMPP in java?', 1, 2, 2);

-- --------------------------------------------------------

--
-- Table structure for table `library`
--

CREATE TABLE `library` (
  `id` int(11) NOT NULL,
  `name` varchar(255) NOT NULL,
  `categorieId` int(11) NOT NULL,
  `description` text NOT NULL,
  `book` varchar(255) NOT NULL,
  `image` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `library`
--

INSERT INTO `library` (`id`, `name`, `categorieId`, `description`, `book`, `image`) VALUES
(2, 'C Programmers Projects', 1, 'We are a group of exceptional programmers our aim is to promote programming. \r\nIf you are a programmer then contact us to secure your future.', '1625230555.pdf', '1625230555.png');

-- --------------------------------------------------------

--
-- Table structure for table `teacher`
--

CREATE TABLE `teacher` (
  `id` int(11) NOT NULL,
  `name` varchar(255) NOT NULL,
  `mail` varchar(255) NOT NULL,
  `phone` varchar(20) NOT NULL,
  `image` varchar(255) NOT NULL,
  `qualification` varchar(255) NOT NULL,
  `description` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `teacher`
--

INSERT INTO `teacher` (`id`, `name`, `mail`, `phone`, `image`, `qualification`, `description`) VALUES
(1, 'Sahil Mohurale', 'sahilmohurale03@gmail.com', '8830568867', '1665164771.jpg', 'B tech', 'Hi, my name is Sahil Mohurale.');

-- --------------------------------------------------------

--
-- Table structure for table `team`
--

CREATE TABLE `team` (
  `id` int(11) NOT NULL,
  `name` varchar(255) NOT NULL,
  `image` varchar(255) NOT NULL,
  `qualification` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `team`
--

INSERT INTO `team` (`id`, `name`, `image`, `qualification`) VALUES
(1, 'Chaudhry Faheem Irfan', '1625230980.jpg', 'M Phil'),
(5, 'Sahil Mohurale', '1665167318.jpg', 'B tech');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admin`
--
ALTER TABLE `admin`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `blog`
--
ALTER TABLE `blog`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `categories`
--
ALTER TABLE `categories`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `content`
--
ALTER TABLE `content`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `course`
--
ALTER TABLE `course`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `library`
--
ALTER TABLE `library`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `teacher`
--
ALTER TABLE `teacher`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `team`
--
ALTER TABLE `team`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `admin`
--
ALTER TABLE `admin`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `blog`
--
ALTER TABLE `blog`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `categories`
--
ALTER TABLE `categories`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `content`
--
ALTER TABLE `content`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `course`
--
ALTER TABLE `course`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `library`
--
ALTER TABLE `library`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `teacher`
--
ALTER TABLE `teacher`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `team`
--
ALTER TABLE `team`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
