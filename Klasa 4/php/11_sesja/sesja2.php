<?php 
  session_start();
  unset($_SESSION['klaw']);
  unset($_SESSION['mysz']);
?>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>strona 2</title>
</head>
<body>
  <h1>Wybierz ilość:</h1>
    <form action="./sesja3.php" method="get">
      <input type="number" name="mysz" id="mysz" min="0" step="1" placeholder="myszka"><br>
      <input type="number" name="klaw" id="klaw" min="0" step="1" placeholder="klawiatura"><br>
      <input type="submit" name="prześlij">
    </form>
</body>
</html>