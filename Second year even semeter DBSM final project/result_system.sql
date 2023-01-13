-- phpMyAdmin SQL Dump
-- version 4.7.7
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Feb 22, 2019 at 07:32 AM
-- Server version: 10.1.30-MariaDB
-- PHP Version: 7.2.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `result_system`
--

-- --------------------------------------------------------

--
-- Table structure for table `admission_info`
--

CREATE TABLE `admission_info` (
  `Roll` int(10) NOT NULL,
  `Merit` int(5) DEFAULT NULL,
  `admission_roll` int(10) DEFAULT NULL,
  `name` varchar(50) DEFAULT NULL,
  `father_name` varchar(50) DEFAULT NULL,
  `contact_info` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `admission_info`
--

INSERT INTO `admission_info` (`Roll`, `Merit`, `admission_roll`, `name`, `father_name`, `contact_info`) VALUES
(1610001, 1271, 8550, 'Tarikul Islam Tamiti', 'MD. Abul Kashem', 'tarik2568@gmail.com'),
(1610002, 1228, 6549, 'Shahwat Hasnaine Samin', 'GM Tafayel Khan', 'samin1610002@gmail.com'),
(1610003, 1471, 3005, 'Nusrat Jahan Tanni', 'Gias Uddin', 'tanni03@gmail.com'),
(1610004, 1561, 3285, 'Saleh Mohammad shahariar', 'Shahiar Khan', 'saleh04@gmail.com'),
(1610005, 1355, 3435, 'MD. Faysal Ahmed', 'Rafsan Jani Khan', 'faysaal05@gmail.com'),
(1610028, 1664, 6969, 'Tahmim Hossain Turjo', 'MD MOSHAROF HOSSAIN', 'turjo5050@gmail.com');

-- --------------------------------------------------------

--
-- Table structure for table `all_gpa`
--

CREATE TABLE `all_gpa` (
  `roll` int(11) DEFAULT NULL,
  `course_no` varchar(30) DEFAULT NULL,
  `gpa` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `all_gpa`
--

INSERT INTO `all_gpa` (`roll`, `course_no`, `gpa`) VALUES
(1610001, 'ECE-1101', 4),
(1610002, 'ECE-1101', 3),
(1610003, 'ECE-1101', 2.75),
(1610004, 'ECE-1101', 2.75),
(1610005, 'ECE-1101', 3.75),
(1610001, 'ECE-1103', 3.25),
(1610002, 'ECE-1103', 2.25),
(1610003, 'ECE-1103', 2.75),
(1610004, 'ECE-1103', 3.25),
(1610005, 'ECE-1103', 3.5),
(1610001, 'Math-1117', 3),
(1610002, 'Math-1117', 2.25),
(1610003, 'Math-1117', 3),
(1610004, 'Math-1117', 3),
(1610005, 'Math-1117', 3.25),
(1610001, 'Hum-1117', 3),
(1610002, 'Hum-1117', 2.25),
(1610003, 'Hum-1117', 3),
(1610004, 'Hum-1117', 3.25),
(1610005, 'Hum-1117', 3.5),
(1610001, 'Phy-1117', 3.25),
(1610002, 'Phy-1117', 2.75),
(1610003, 'Phy-1117', 2.5),
(1610004, 'Phy-1117', 3.25),
(1610005, 'Phy-1117', 3.75),
(1610001, 'ECE-1102', 2.75),
(1610002, 'ECE-1102', 4),
(1610003, 'ECE-1102', 2.25),
(1610004, 'ECE-1102', 4),
(1610005, 'ECE-1102', 3.75),
(1610001, 'ECE-1104', 4),
(1610002, 'ECE-1104', 3.75),
(1610003, 'ECE-1104', 3.75),
(1610004, 'ECE-1104', 3.25),
(1610005, 'ECE-1104', 3.5),
(1610001, 'HUM-1118', 4),
(1610002, 'HUM-1118', 2.75),
(1610003, 'HUM-1118', 3.75),
(1610004, 'HUM-1118', 3.25),
(1610005, 'HUM-1118', 0),
(1610001, 'PHY-1118', 4),
(1610002, 'PHY-1118', 2.75),
(1610003, 'PHY-1118', 3.75),
(1610004, 'PHY-1118', 2.25),
(1610005, 'PHY-1118', 3.75),
(1610001, 'ECE-1100', 4),
(1610002, 'ECE-1100', 2.75),
(1610003, 'ECE-1100', 3.75),
(1610004, 'ECE-1100', 2.25),
(1610005, 'ECE-1100', 3.75);

-- --------------------------------------------------------

--
-- Table structure for table `course_info`
--

CREATE TABLE `course_info` (
  `course_no` varchar(20) NOT NULL,
  `course_title` varchar(50) DEFAULT NULL,
  `credit` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `course_info`
--

INSERT INTO `course_info` (`course_no`, `course_title`, `credit`) VALUES
('ECE-1100', 'Introduction to Computer System', 0.75),
('ECE-1101', 'Circuits & systems-I', 3),
('ECE-1102', 'Circuits & systems-II', 1.5),
('ECE-1103', 'Computer Programming', 3),
('ECE-1104', 'Computer Programming sessional', 1.5),
('Hum-1117', 'Technical English', 3),
('Hum-1118', 'Technical English Sessional', 0.75),
('Math-1117', 'Calculus and Co-ordinate Geometry', 3),
('Phy-1117', 'Optics and Modern Physics', 3),
('phy-1118', 'Optics and Modern Physics Sessional', 0.75);

-- --------------------------------------------------------

--
-- Table structure for table `ct_attend`
--

CREATE TABLE `ct_attend` (
  `roll` int(10) DEFAULT NULL,
  `course_no` varchar(10) DEFAULT NULL,
  `CT_1` float DEFAULT NULL,
  `CT_2` float DEFAULT NULL,
  `CT_3` float DEFAULT NULL,
  `CT_4` float DEFAULT NULL,
  `attendance` float DEFAULT NULL,
  `total` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `ct_attend`
--

INSERT INTO `ct_attend` (`roll`, `course_no`, `CT_1`, `CT_2`, `CT_3`, `CT_4`, `attendance`, `total`) VALUES
(1610001, 'ECE-1101', 2, 14, 11, 15, 8, 21),
(1610001, 'ECE-1103', 15, 8, 11, 20, 7, 23),
(1610001, 'Math-1117', 17, 7, 10, 18, 7, 20),
(1610001, 'Phy-1117', 7, 17, 10, 15, 7, 21),
(1610001, 'Hum-1117', 17, 7, 10, 18, 7, 20),
(1610002, 'ECE-1101', 15, 14, 1, 8, 6, 19),
(1610002, 'ECE-1103', 5, 14, 1, 8, 6, 16),
(1610002, 'Math-1117', 15, 14, 1, 8, 6, 19),
(1610002, 'Hum-1117', 15, 14, 1, 8, 6, 19),
(1610002, 'Phy-1117', 15, 14, 1, 8, 6, 19),
(1610003, 'ECE-1101', 2, 18, 1, 5, 8, 17),
(1610003, 'ECE-1103', 5, 14, 1, 8, 6, 16),
(1610003, 'Math-1117', 20, 2, 1, 18, 8, 21),
(1610003, 'Hum-1117', 15, 14, 1, 8, 6, 19),
(1610003, 'Phy-1117', 15, 14, 1, 8, 6, 19),
(1610004, 'ECE-1101', 15, 14, 1, 8, 6, 19),
(1610004, 'ECE-1103', 5, 14, 1, 8, 6, 16),
(1610004, 'Math-1117', 5, 14, 1, 1, 6, 13),
(1610004, 'Hum-1117', 8, 14, 2, 8, 6, 16),
(1610004, 'Phy-1117', 15, 14, 1, 8, 6, 19),
(1610005, 'ECE-1101', 19, 14, 1, 8, 6, 20),
(1610005, 'ECE-1103', 5, 14, 1, 8, 6, 16),
(1610005, 'Math-1117', 5, 14, 1, 1, 6, 13),
(1610005, 'Hum-1117', 8, 14, 2, 8, 6, 16),
(1610005, 'Phy-1117', 15, 14, 1, 8, 6, 19);

-- --------------------------------------------------------

--
-- Table structure for table `semester`
--

CREATE TABLE `semester` (
  `roll` int(10) DEFAULT NULL,
  `course_no` varchar(30) DEFAULT NULL,
  `sec_A` float DEFAULT NULL,
  `sec_B` float DEFAULT NULL,
  `total` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `semester`
--

INSERT INTO `semester` (`roll`, `course_no`, `sec_A`, `sec_B`, `total`) VALUES
(1610001, 'ECE-1101', 31, 35, 66),
(1610002, 'ECE-1101', 31, 10, 41),
(1610003, 'ECE-1101', 26, 15, 41),
(1610004, 'ECE-1101', 14, 26, 40),
(1610005, 'ECE-1101', 31, 25, 56),
(1610001, 'ECE-1103', 31, 11, 42),
(1610002, 'ECE-1103', 20, 10, 30),
(1610003, 'ECE-1103', 27, 15, 42),
(1610004, 'ECE-1103', 24, 26, 50),
(1610005, 'ECE-1103', 31, 25, 56),
(1610001, 'Math-1117', 31, 11, 42),
(1610002, 'Math-1117', 20, 10, 30),
(1610003, 'Math-1117', 27, 15, 42),
(1610004, 'Math-1117', 24, 26, 50),
(1610005, 'Math-1117', 31, 25, 56),
(1610001, 'Hum-1117', 31, 11, 42),
(1610002, 'Hum-1117', 20, 10, 30),
(1610003, 'Hum-1117', 27, 15, 42),
(1610004, 'Hum-1117', 24, 26, 50),
(1610005, 'Hum-1117', 31, 25, 56),
(1610001, 'Phy-1117', 23, 12, 45),
(1610002, 'Phy-1117', 25, 15, 40),
(1610003, 'Phy-1117', 17, 15, 32),
(1610004, 'Phy-1117', 24, 26, 50),
(1610005, 'Phy-1117', 31, 25, 56);

-- --------------------------------------------------------

--
-- Table structure for table `semester_info`
--

CREATE TABLE `semester_info` (
  `roll` int(10) DEFAULT NULL,
  `semester` varchar(10) DEFAULT NULL,
  `year` varchar(10) DEFAULT NULL,
  `session` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `semester_info`
--

INSERT INTO `semester_info` (`roll`, `semester`, `year`, `session`) VALUES
(1610001, '1', '1', '2016-17'),
(1610002, '1', '1', '2016-17'),
(1610003, '1', '1', '2016-17'),
(1610004, '1', '1', '2016-17'),
(1610005, '1', '1', '2016-17');

-- --------------------------------------------------------

--
-- Table structure for table `sessional`
--

CREATE TABLE `sessional` (
  `roll` int(10) DEFAULT NULL,
  `course_no` varchar(30) DEFAULT NULL,
  `total` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `sessional`
--

INSERT INTO `sessional` (`roll`, `course_no`, `total`) VALUES
(1610001, 'ECE-1102', 56),
(1610002, 'ECE-1102', 86),
(1610003, 'ECE-1102', 46),
(1610004, 'ECE-1102', 87),
(1610005, 'ECE-1102', 77),
(1610001, 'ECE-1104', 86),
(1610002, 'ECE-1104', 75),
(1610003, 'ECE-1104', 76),
(1610004, 'ECE-1104', 67),
(1610005, 'ECE-1104', 73),
(1610001, 'HUM-1118', 83),
(1610002, 'HUM-1118', 55),
(1610003, 'HUM-1118', 76),
(1610004, 'HUM-1118', 67),
(1610005, 'HUM-1118', 23),
(1610001, 'PHY-1118', 81),
(1610002, 'PHY-1118', 55),
(1610003, 'PHY-1118', 76),
(1610004, 'PHY-1118', 46),
(1610005, 'PHY-1118', 78),
(1610001, 'ECE-1100', 81),
(1610002, 'ECE-1100', 55),
(1610003, 'ECE-1100', 76),
(1610004, 'ECE-1100', 46),
(1610005, 'ECE-1100', 78);

-- --------------------------------------------------------

--
-- Stand-in structure for view `sgpa`
-- (See below for the actual view)
--
CREATE TABLE `sgpa` (
`roll` int(11)
,`SGPA` double(19,2)
);

-- --------------------------------------------------------

--
-- Table structure for table `total_no`
--

CREATE TABLE `total_no` (
  `ROLL` int(10) DEFAULT NULL,
  `course_no` varchar(30) DEFAULT NULL,
  `total` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `total_no`
--

INSERT INTO `total_no` (`ROLL`, `course_no`, `total`) VALUES
(1610001, 'ECE-1101', 87),
(1610002, 'ECE-1101', 60),
(1610003, 'ECE-1101', 58),
(1610004, 'ECE-1101', 59),
(1610005, 'ECE-1101', 76),
(1610001, 'ECE-1103', 65),
(1610002, 'ECE-1103', 46),
(1610003, 'ECE-1103', 58),
(1610004, 'ECE-1103', 66),
(1610005, 'ECE-1103', 72),
(1610001, 'Math-1117', 62),
(1610002, 'Math-1117', 49),
(1610003, 'Math-1117', 63),
(1610004, 'Math-1117', 63),
(1610005, 'Math-1117', 69),
(1610001, 'Hum-1117', 62),
(1610002, 'Hum-1117', 49),
(1610003, 'Hum-1117', 61),
(1610004, 'Hum-1117', 66),
(1610005, 'Hum-1117', 72),
(1610001, 'Phy-1117', 66),
(1610002, 'Phy-1117', 59),
(1610003, 'Phy-1117', 51),
(1610004, 'Phy-1117', 69),
(1610005, 'Phy-1117', 75),
(1610001, 'ECE-1102', 56),
(1610002, 'ECE-1102', 86),
(1610003, 'ECE-1102', 46),
(1610004, 'ECE-1102', 87),
(1610005, 'ECE-1102', 77),
(1610001, 'ECE-1104', 86),
(1610002, 'ECE-1104', 75),
(1610003, 'ECE-1104', 76),
(1610004, 'ECE-1104', 67),
(1610005, 'ECE-1104', 73),
(1610001, 'HUM-1118', 83),
(1610002, 'HUM-1118', 55),
(1610003, 'HUM-1118', 76),
(1610004, 'HUM-1118', 67),
(1610005, 'HUM-1118', 23),
(1610001, 'PHY-1118', 81),
(1610002, 'PHY-1118', 55),
(1610003, 'PHY-1118', 76),
(1610004, 'PHY-1118', 46),
(1610005, 'PHY-1118', 78),
(1610001, 'ECE-1100', 81),
(1610002, 'ECE-1100', 55),
(1610003, 'ECE-1100', 76),
(1610004, 'ECE-1100', 46),
(1610005, 'ECE-1100', 78);

-- --------------------------------------------------------

--
-- Structure for view `sgpa`
--
DROP TABLE IF EXISTS `sgpa`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `sgpa`  AS  select `all_gpa`.`roll` AS `roll`,round((sum((`all_gpa`.`gpa` * `course_info`.`credit`)) / sum(`course_info`.`credit`)),2) AS `SGPA` from (`all_gpa` join `course_info`) where (`all_gpa`.`course_no` = `course_info`.`course_no`) group by `all_gpa`.`roll` ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admission_info`
--
ALTER TABLE `admission_info`
  ADD PRIMARY KEY (`Roll`);

--
-- Indexes for table `all_gpa`
--
ALTER TABLE `all_gpa`
  ADD KEY `roll` (`roll`);

--
-- Indexes for table `course_info`
--
ALTER TABLE `course_info`
  ADD PRIMARY KEY (`course_no`);

--
-- Indexes for table `ct_attend`
--
ALTER TABLE `ct_attend`
  ADD KEY `roll` (`roll`);

--
-- Indexes for table `semester`
--
ALTER TABLE `semester`
  ADD KEY `roll` (`roll`);

--
-- Indexes for table `semester_info`
--
ALTER TABLE `semester_info`
  ADD KEY `roll` (`roll`);

--
-- Indexes for table `sessional`
--
ALTER TABLE `sessional`
  ADD KEY `roll` (`roll`);

--
-- Indexes for table `total_no`
--
ALTER TABLE `total_no`
  ADD KEY `ROLL` (`ROLL`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `all_gpa`
--
ALTER TABLE `all_gpa`
  ADD CONSTRAINT `all_gpa_ibfk_1` FOREIGN KEY (`roll`) REFERENCES `admission_info` (`Roll`);

--
-- Constraints for table `ct_attend`
--
ALTER TABLE `ct_attend`
  ADD CONSTRAINT `ct_attend_ibfk_1` FOREIGN KEY (`roll`) REFERENCES `admission_info` (`Roll`);

--
-- Constraints for table `semester`
--
ALTER TABLE `semester`
  ADD CONSTRAINT `semester_ibfk_1` FOREIGN KEY (`roll`) REFERENCES `admission_info` (`Roll`);

--
-- Constraints for table `semester_info`
--
ALTER TABLE `semester_info`
  ADD CONSTRAINT `semester_info_ibfk_1` FOREIGN KEY (`roll`) REFERENCES `admission_info` (`Roll`),
  ADD CONSTRAINT `semester_info_ibfk_2` FOREIGN KEY (`roll`) REFERENCES `admission_info` (`Roll`);

--
-- Constraints for table `sessional`
--
ALTER TABLE `sessional`
  ADD CONSTRAINT `sessional_ibfk_1` FOREIGN KEY (`roll`) REFERENCES `admission_info` (`Roll`);

--
-- Constraints for table `total_no`
--
ALTER TABLE `total_no`
  ADD CONSTRAINT `total_no_ibfk_1` FOREIGN KEY (`ROLL`) REFERENCES `admission_info` (`Roll`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
