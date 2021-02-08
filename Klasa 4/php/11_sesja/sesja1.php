<?php 
  session_start();
?>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Strona 1</title>
</head>
<body>
  <?php
    $_SESSION['cenaMyszy'] = 200;
    $_SESSION['cenaKlaw'] = 300;
    echo "<p>Ceny produktów:\nMysz:".$_SESSION['cenaMyszy']."\nKlawiatura:".$_SESSION['cenaKlaw']."</p>"
  ?>
  <a href="./sesja2.php">Przejdz do kupna</a>
</body>
</html>