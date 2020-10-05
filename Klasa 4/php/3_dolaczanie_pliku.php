<!DOCTYPE html>
<html lang="pl" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>Dolaczanie plików</title>
  </head>
  <body>
  <h3>Poczatek pliku</h3>
    <?php
        //include './3_1_file.php';
        include_once './3_1_file.php';

        echo "Require:<br>";
        require './3_1_file.php';
        require_once './3_1_file.php';
    ?>
    <h3>Koniec pliku</h3>
  </body>
</html>
