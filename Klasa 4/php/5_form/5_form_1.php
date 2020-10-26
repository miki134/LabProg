<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formularz</title>
</head>
<body>
    <h4>Formularz - wprowadzanie danych</h4>
    <form action="./5_form_data_1.php" method="get">
    <input type="text" name="name" placeholder="Imię"><br><br>
    <input type="text" name="surname" placeholder="Nazwisko"><br><br>
    <input type="radio" name="color" value="r">Czerwony<br><br>
    <input type="radio" name="color" value="g">Zieolony<br><br>
    <input type="radio" name="color" value="b" checked>Niebieski<br><br>
    <input type="text" name="miasto" placeholder="Miasto"><br><br>
    <input type="submit" value="wyślij dane"><br><br>

</form>
</body>
</html>