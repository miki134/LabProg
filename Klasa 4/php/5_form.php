<!DOCTYPE html>
<html>
    <head>
    </head>
    <body>
        <h3>Dane użytkownika</h3>
        <form method="get">
            <input type="text" name="surname"/><br><br>
            <input type="submit" name="button" value="Zatwierdź"/><hr>

        </form>
        <?php
        //isset()
        if(!empty($_GET['surname'])){
            $surname = $_GET['surname'];
            if(strlen(trim($_GET['surname']))){
                echo <<<TEXT
            Nazwisko: $surname<br>
TEXT;
            }
            else{
                echo "Nie wprowadzaj tylko białych znaków";
            }
        }
        echo '<br>';
        print_r($_GET);
        ?>
    </body>

</html>