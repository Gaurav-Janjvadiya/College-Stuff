<?php
    if($_POST['number'] == 0){
        echo "<center><h1 style='color:black;'>Entered number is Zero </h1><br><br></center>";
    }else{
        if($_POST['number'] > 0 ){
            echo "<center><h1 style='color:green;'>Entered number $_POST[number] is positive</h1><br><br></center>";
        }else{
            echo "<center><h1 style='color:red;'>Entered number $_POST[number] is nagative</h1><br><br></center>";
        }
    }
   
?>