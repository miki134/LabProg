<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Klienci</title>
</head>
<body>
    <h3>Klienci</h3>
    <?php
    $connect = @new mysqli("localhost", "root", "1", "zsk");
    // print_r($connect);
    if(!$connect->connect_errno){
        $sql = "SELECT * FROM `customers`";
        $result = $connect->query($sql);

        //$customer = $result->fetch_assoc();
        //print_r($customer);
        //echo $customer['name'];

        while ($customer = $result->fetch_assoc()) {
            //print_r($customer);
            //echo '<br>';

            echo <<<CUSTOMER
            Imię i nazwisko: $customer[name] $customer[surname]<br>
            Data urodzenia: $customer[birthday]
            <hr>
CUSTOMER;
        }
        $connect->close();
    }else{
        echo "Błędne połączenie z bazą danych. <br> Error number:",
        $connect->connect_errno, '<br> Error ',$connect->connect->connect_error;
    }
    ?>
</body>
</html>