<?php
//funkcje date
    echo 'rok - miesiac - dzien: ', date('Y-m-d'), '<br>';
    echo date('d-m-Y'), '<br>'; //16-11-2020
    echo date('d-M-Y'), '<br>'; //16-Nov-2020
    echo date('j-M-Y'), '<br>'; //16-Nov-2020
    
    echo date('G:i:s'), '<br>'; //11:41:12
    echo date('H:i:s'), '<br>'; //11:41:12

//funkcje getdate
    $date = getdate();
    print_r($date);

    echo "<br> Dzień roku: $date[yday]";
    echo '<hr>';
    
//data w formacie: 16 listopad 2020, 10:59:10 | poniedziałek
    echo date('d'), ' ', $date['month'], ' ', $date['year'], ', ', date('G:i:s'), ' | ', $date['weekday'];
    echo '<hr>';
?>