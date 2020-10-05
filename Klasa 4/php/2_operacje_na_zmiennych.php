<!DOCTYPE html>
<html lang="pl" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>Operacje na zmiennych</title>
  </head>
  <body>
    <?php
    //wersja php
    echo PHP_VERSION;
    echo "<br>";
    //echo phpinfo();
    //interpolacja
    $x = 15;
    $x = $x << 3;
    echo "$x<br>";

    $x = $x >> 2;
    echo "$x<br>";

    //porównanie
    $x=-10;
    $y=1;
    echo $x <=> $y;

    if($x==$y){
      echo '<br> $x jest równa $y';
    }else{
      echo '<br> $x nie jest równa $y';
    }

    if($x===$y){
      echo '<br> $x jest identyczna $y';
    }else{
      echo '<br> $x nie jest identyczna $y';
    }

    //kontrola typu zmiennych
    // is_null(), is_string() ;

    $x = 1;
    $x=$x++;
    echo $x;
    $x=++$x;


    ?>

  </body>
</html>
