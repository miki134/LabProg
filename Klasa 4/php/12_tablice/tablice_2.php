<?php
//sortowanie tablic
//sort, rstort, asort, arsort, ksort, krsort

    $tab = array(5, 10, -2, 5, 22);

    function t($tab){
        foreach ($$tab as $value) {
            echo "$value";
        }
        echo '<br>';
    }

    t($tab);

    //sortowanie tablicy niemalejące
    sort($tab);
    t($tab);

    //sortowanie tablicy nierosnące
    rsort($tab);
    t($tab);

    function sortNames($names) {
        forEach($names as $key => $value) {
            $names[$key] = strtolower($value);
        }
        sort($names);
        return $names;
        
    }
    
    $names = array('Katarzyna', 'Anna', 'Zbigniew', 'Paweł');
    t($names);
    t(sort($names));
    
    $sorted_names = sortNames($names);
    t($sorted_names);

// zamiana liter na małe
    function replaceToLowerCase(&$tab){
        foreach ($tab as $key) {
            $replace = strtolower($value);
            $tab[$key] = $replace;
            echo "$replace";
        }
    }

    replaceToLowerCase($names);
    t($names);

    sort($names);
    t($names);

// sortowanie tablic asocjacyjnych
    $tabAsoc = array(
        'name' => 'Paweł',
        'surname' => 'Bąk',
        'age' => 20,
        'nick' => '2pawel',
        'height' => 180
    );

    t($tabAsoc);

// sortowanie tablicy asocjacyjnej według wartości niemalejąco
    asort($tabAsoc);
    t($tabAsoc);

// sortowanie tablicy asocjacyjnej według wartości nierosnąco
    arsort($tabAsoc);
    t($tabAsoc);

// sortowanie tablicy asocjacyjnej według klucza niemalejąco
    ksort($tabAsoc);
    t($tabAsoc);

// sortowanie tablicy asocjacyjnej według klucza nierosnąco
    krsort($tabAsoc);
    t($tabAsoc);
?>