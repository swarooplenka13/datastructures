<?php
	$connection = mysqli_connect("localhost","root","");
	$db = mysqli_select_db($connection,"shopee");
	$query = "insert into login values('','$_POST[name]','$_POST[email]','$_POST[password]')";
	$query_run = mysqli_query($connection,$query);
?>
<script type="text/javascript">
	alert("Created account successfully.");
	window.location.href = "user_home.php";
</script>
