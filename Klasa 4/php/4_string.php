<?php
    $text = <<<T
    zsk - Zespół
    Szkół
    Komunikacji<br>
T;
    echo $text;
    echo nl2br($text);
    $name = "jANUSZ";

echo "<hr>";

//zamiana na małe litery
    echo strtolower($name);
    echo "<br>";
    echo strtoupper($name);
    echo "<br>";

    $name = "janusz kowalski";
//zamiana pierwszej litery na dużą
    echo ucfirst($name);
    echo "<br>";

//zamiana  litery na dużą na 
    echo ucwords($name);

    $lorem = <<<LOREM
    <br>
    Lorem, ipsum dolor sit amet consectetur 
    adipisicing elit. Amet libero impedit 
    neque facere deserunt. Quae beatae explicabo 
    laborum dolorem deserunt nobis nihil, ex 
    doloribus laboriosam minima possimus 
    voluptatem perspiciatis molestiae!  <hr>  
LOREM;


    echo $lorem;
    echo wordwrap($lorem, 40, '<br>');
    echo wordwrap($lorem, 40, '<hr>');

//czyszenie zawartosci bufora
    ob_clean();
?>