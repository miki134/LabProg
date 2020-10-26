<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h4></h4>
    <form action="./5_form_data_2.php" method="post">
        <input type="text" name="surname" placeholder="Nazwisko" autofocus autocomplete="off" pattern="[a-zA-Z]{2,}"><br><br>
        <input type="text" name="name" placeholder="imię" autocomplete="off"><br><br>

        <select name="gender">
        <option value="m">Mężczyzna</option>
        <option value="w">Kobieta</option>
        <!-- <option value="w" selected> kobieta</option> --->
        </select>
        <input type="radio" name="color" value="r">Czerwony<br><br>
        <input type="radio" name="color" value="g">Zieolony<br><br>
        <input type="radio" name="color" value="b" checked>Niebieski<br><br>
    
        <input type="submit" value="wyslij dane">
    </form>
</body>
</html>