<?php
    functionf(){
        return 'Janusz';
    }

    echo f();

    function show($x){
        return "Zmienna \$x wynosi: $x";
    }

    echo show('text');

    $y = 10;

    echo show($y);

    function sum($x, $y){
        return $x + $y;
    }

    echo sum(2, 4);

    $avg = sum(2,4);
    echo "<br> Średnia wynosi: $avg<br>";
    echo gettype($avg); //integer

    $avg = sum(2,4) /2;
    echo "<br> Średnia wynosi: $avg<br>";
    echo gettype($avg); //double
    
    function int($x):int{
        return $x;
    }

    echo int(10); //10
    echo int(10.5) //10

    function float($x):float{
        return $x;
    }

    echo float(10); //10
    echo float(10.5) //10.5

    function sum1(int $x, float $y){
        return $x + $y;
    }

    echo sum1(2,3); //5
    echo sum1(2.5,3); //5
    echo sum1(2.5,3.5); //5.5
?>