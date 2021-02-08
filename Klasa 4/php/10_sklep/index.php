<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sklep</title>
</head>
<body>
    <h4>Wprowadź produkty</h4>
    <form action="./zakupy.php" method="get">
    <?php
    for($i = 0; $i<5; $i++){
        $form = <<<LABEL
    <input type="text" name="nazwa_produktu$i" placeholder="nazwa produktu"><br><br>
    <input type="number" name="cena$i" placeholder="cena"><br><br>
    <input type="number" name="ilość$i" value="0"><br><br>
LABEL;
        echo "<hr>L.p $i<br>".$form;
    }
?>
    <input type="submit" value="Zakup"><br><br>
</form>
</body>
</html>