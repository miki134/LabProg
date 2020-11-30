<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Lista - dane</title>
</head>
<body>
    <?php
        if(isset($_POST['button'])){
            echo '<h4>Lista</h4><ul>';
            for($i=0;$i<count($_POST); $i++){
                    if(!empty($_POST["element$i"])){
                    echo "<li>".$_POST["element$i"]."</li>";
                }
            }
            echo "</ul>";
        }
        else if(!empty($_POST['count'])){
    echo '<h4>Lista - dane</h4>';
    ?>
    <form action="." method="post">
        <?php 
            for($i=0;$i<=$_POST['count']; $i++){
                echo "<input type=\"text\" name=\"element$i\" placeholder=\"element\"><br><br>";
            }
        ?>
        <input type="submit" value="Pokaż listę" name="button">
    </form>
    <?php 
    }else{
        header('location: ./');
    }
    ?>

</body>
</html>