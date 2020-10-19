<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formularz</title>
</head>
<body>
    <h4>Formularz - pobrane dane</h4>
    <?php
     echo '<pre>'; 
     print_r($_GET);
     echo '</pre>';
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

        $name = $_GET['name'];
        echo <<<L
        Imię: $name<br>
        Nazwisko: $_GET[surname]<br>
        Kolor: $color<br>
        Miasto : $_GET[miasto]<br>
L;
    }else
    {
        //echo 'Wprowadz wszystkie dane';
        //header('location: ../5_form_1.php');
        ?>
        <script>
            history.back();
        </script>
        <?php
    }
    ?>
</body>
</html>