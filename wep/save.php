<?php
$my_con=mysqli_connect("localhost", "root","","studentdb" );
$name=$_POST['username'];
$email=$_POST['email'];
$sql="INSERT INTO Students(name,email) values('$name','$email')";
mysqli_query($my_con, $sql);
echo "<h2>Data saved successfully!</h2>";
mysqli_close($my_con);
?>