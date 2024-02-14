<?php
    if($_POST['number']%9 == 0)
    {
        echo "<br><br><br><center><h1 style='color:green;'>Number can be divided by 9(nine)</h1></center>";
    }else{
        echo "<br><br><br><center><h1 style='color:red;'>Number cannot be divided by 9(nine)</h1></center>";
    }
?>