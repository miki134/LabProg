<?php
  session_start();
?>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>strona 3</title>
</head>
<body>
  <h1>Suma:</h1>
    <?php 
      $_SESSION['mysz'] = $_GET['mysz'];
      $_SESSION['klaw'] = $_GET['klaw'];
      $cenaMyszy = $_SESSION['mysz'] * $_SESSION['cenaMyszy'];
      $cenaKlaw = $_SESSION['klaw'] * $_SESSION['cenaKlaw'];
      echo "Podsumowanie:";
      echo "Cena mysz: $cenaMyszy";
      echo "Cena klawiatur: $cenaKlaw";
      $cenaRazem = $cenaKlaw+$cenaMyszy;
      echo "Razem: $cenaRazem";
    ?>

    <a href="./sesja1.php">Ceny produktów</a>
    <a href="./sesja2.php">Koszyk</a>
</body>
</html>
