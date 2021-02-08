<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        for($i=0;$i<5; $i++){
                if(empty($_GET["ilość$i"]) || empty($_GET["cena$i"])){
                    echo "<script>history.back();</script>";
            }
        }
    
        $sum = 0;
        for($i = 0; $i<5;$i++){
            $sum += licz(number_format($_GET["cena$i"]), number_format($_GET["ilość$i"]));
        }
        
        echo  "Łączna cena produktów wynosi: $sum";

        function licz($cena, $ilosc){
            return $cena*$ilosc;
        }
    ?>
</body>
</html>