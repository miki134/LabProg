<?php
    require_once './connect.php';

    //print_r($_GET);
    $id = $_GET['id'];
    //echo $id;

    $sql = "DELETE FROM `cusomers` WHERE `cusomers`.`id` = $id";
    $connect->query($sql);

    // affected_rows
    //echo $connect->affected_rows;

    if($connect->affected_rows){
        header('location: ./cusomers.php?delete=1');
    }
    else{
        header('location: ./cusomers.php?delete=0');
    }
?>