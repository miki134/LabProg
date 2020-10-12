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

//usuwanie białych znaków
    $name = "Łukasz";
    $name1 = "  Łukasz ";
    
    echo strlen($name);//7
    echo mb_strlen($name);//6
    echo "<br> <hr>";


    echo mb_strlen($name1); //9
    echo mb_strlen(ltrim($name1)); //7
    echo mb_strlen(rtrim($name1)); //8
    echo mb_strlen(trim($name1)); //6

    // przeszukiwanie ciągów znaków
    
    $addresss = "Poznań, ul. Polna 7, tel. (61) 123-45-67";
    $search = strstr($addresss, "tel");
    echo '<br><hr>',  $search, '<br>'; //tel. (61) 123-45-67

    $addresss = "Poznań, ul. Polna 7, tel. (61) 123-45-67";
    $search = strstr($addresss, "tel", true);
    echo '<br><hr>',  $search, '<br>'; //Poznań, ul. Polna 7,

    $addresss = "Poznań, ul. Polna 7, tel. (61) 123-45-67";
    $search = strstr($addresss, "tel");
    echo '<br><hr>',  $search, '<br>'; //Poznań, ul. Polna 7,

    echo strstr('zsk@gmail.com', '@');//@gmail.com
    echo strstr('zsk@gmail.com', 64);//@gmail.com

    //substr
    $name = "Janusz";
    echo substr($name, 3); //usz
    echo substr($name, 3, 2); //us

    echo '<br>';
    echo substr(strstr('zsk@gmail.com', '@'), 1);//gmail.com

    //przetwarzanie ciągów znaków
    $replace = str_replace("%imię%", "Janusz", "Masz na imię: %imię%");
    echo "<br> $replace <br>";

    //zamiana polskich znaków
    $login = "bączek";
    $censure = array('ą', 'ę', 'ś', 'ż', 'ź', 'ć', 'ó', 'ń', 'ł');
    $replace = array('a', 'e', 's', 'z', 'z', 'c', 'o', 'n', 'l');
    //$replace = "___***___";

    $correctLogin = str_replace($censure, $replace, $login);

    echo <<<LOGIN
    Login: $login<br>
    Login po zamianie: $correctLogin <br>
LOGIN;

