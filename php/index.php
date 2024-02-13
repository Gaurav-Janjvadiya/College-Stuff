<html>
<head></head>
<body>
<form method="POST">
<center>
username:<input type="text" name="username" required/><br>
subject:<input type="number" name="subject1" required>
        <input type="number" name="subject2" required>
        <input type="number" name="subject3" required>
        <input type="submit" name="submit" value="submit" required>
</center>
</form>
</body>
</html>

<?php

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST["username"];
    $subject1 = $_POST["subject1"];
    $subject2 = $_POST["subject2"];
    $subject3 = $_POST["subject3"];
    $total = $subject1 + $subject2 + $subject3;
    $percentage = ($total / 300) * 100;

    echo "Username: $username <br>";
    echo "Subject 1: $subject1 <br>";
    echo "Subject 2: $subject2 <br>";
    echo "Subject 3: $subject3 <br>";
    echo "Total: $total <br>";
    echo "Percentage: $percentage%";
}

?>