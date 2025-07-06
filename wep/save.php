<?php
$my_con=mysqli_connect("localhost", "root","","studentdb" );
$name=$_POST['username'];
$email=$_POST['email'];
$sql="INSERT INTO Students(name,email) values('$name','$email')";
mysqli_query($my_con, $sql);
echo "Data saved successfully!";
mysqli_close($my_con);
?>