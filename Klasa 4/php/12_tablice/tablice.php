<?php
    $colors = array('biały', 'zielony', 'czarny', 'czerwony');

    echo 'Rozmiar tablicy: ', count($colors), '<br>';
    echo 'Pierwszy element tablicy: ', $colors[0], '<br>';
    echo 'Ostatni element tablicy: ', $colors[count($colors)-1], '<br>';


    for($i = 0; $i < count($colors); $i++){
        echo 'Kolor ', $i+1, ': ', $colors[$i], '<br>';
    }


//tablice asocjacyjne
    $data = array(
        'name' => 'Paweł',
        'surname' => 'Nowak',
        'age' => 20
    );

    echo $data['name'],'<br>';
    echo <<<SHOW
    Imię: {$data["name"]}<br>
    Nazwisko: $data[surname]<br>
SHOW;

//foreach
    foreach($data as $value){
        echo "$value";
    }
    echo "<br>";

    foreach($data as $key => $value){
        echo "$key: $value<br>";
    }

    print_r($data);
    echo '<br>';
    var_dump($data);
    ob_clean();

//tablice wielowymiarowe
    $students = array(
        array('Jan', 'Nowak', 20),
        array('Anna', 'Nowak', 20, 'Poznań'),
        array('Jan'),
        array('Jan', 'Nowak')
    );

    for($i = 0; $i < count($students); $i++){
        //print_r($students[$i]);
        for($j = 0; $j < count($students); $j++){
            echo $students["$i"]["$j"], "";
        }
    }
    echo '<br>';
?>