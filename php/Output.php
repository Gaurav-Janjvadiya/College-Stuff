<?php
    $name = $_POST['name'];
    $sub1 = $_POST['sub1'];
    $sub2 = $_POST['sub2'];
    $sub3 = $_POST['sub3'];

    echo "<h1>Your Name is $name </h1><br>";
    echo "<h2>Marks</h2><br>";
    echo "1. $sub1<br>";
    echo "2. $sub2<br>";
    echo "3. $sub3<br><br>";
    echo "Total. ",$sub1+$sub2+$sub3,"<br><br>";
    echo "Persentage. ",($sub1+$sub2+$sub3)/3,"<br>";

?>