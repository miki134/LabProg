<!DOCTYPE html>
<html lang=pl dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>Zmienne</title>
  </head>
  <body>
    <?php
    $name = 'Janusz';
    $surmane='Nowak';
    echo 'Imię: $name<br>';
    // konkatenacja .
    echo "Imię: $name".", nazwisko: $surmane <br>";
    echo 'tekst <br>';

    // typy danych
    //boolean

    //zapisuj zmienne w jezyku angielksim
    $prawda = true;
    $fałsz = false;
    echo $prawda;

    //inteager
    $bin = 0b1010; //10
    $oct = 011;
    $doc = 11;
    $hex = 0xA;

    echo "<br>$bin<br>";
    echo "<br>$oct<br>";
    echo "<br>$doc<br>";
    echo "<br>$hex<hr>";

    //składnia heredoc
    $name = 'Anna';

    $text = <<< LABEL
    Heredoc <br>
    Imię: $name <br><hr>
    LABEL;
    echo $text;
    echo <<< L
    Heredoc 2 <br>
    Imię: $name <hr>
    L;

    $city='Poznan';
    echo "nazwa zmiennej: \$city, wartosc: $city";
    ?>
  </body>
</html>
