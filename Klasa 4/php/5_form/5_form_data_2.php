<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h4>Dane pobrane z formularza</h4>
    <?php
        echo '<pre>';
        print_r($_POST);
        echo '</pre>';

        $surname = $_POST['surname'];
        $name = $_POST['name'];
        $_POST['gender'] == 'm' ? $gender = "Mężczyzna" : $gender = "Kobieta";
        if(!empty($_GET['name']) && !empty($_GET['surname']) && !empty($_GET['color']) && !empty($_GET['miasto']))
     {
        switch ($_GET['color']) {
            case 'r':
                $color='czerwony';
                break;
            case 'g':
                $color='zielony';
                break;
            case 'b':
                $color='niebieski';
                break;
            
            default:
                # code...
                break;
        }   

        echo <<<LAB
        Imię i nazwisko: $name i $surname
        Płeć: $gender
        Kolor: $color
LAB;

    ?>
</body>
</html>