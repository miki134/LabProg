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
    require_once './connect.php';
    // print_r($connect);
    if(!$connect->connect_errno){
        $sql = "SELECT * FROM `customers`";
        $result = $connect->query($sql);

        //$customer = $result->fetch_assoc();
        //print_r($customer);
        //echo $customer['name'];

        echo <<<TABLE
        <table>
                <tr>
                    <th>Id</th>
                    <th>Imię</th>
                    <th>Nazwisko</th>
                </tr>
TABLE;

        while ($customer = $result->fetch_assoc()) {
            //print_r($customer);
            //echo '<br>';
            //Imię i nazwisko: $customer[name] $customer[surname]<br>
            //Data urodzenia: $customer[birthday]
            //<hr>
            echo <<<CUSTOMER
            <tr>
                <td>$customer[id]</td>
                <td>$customer[name]</td>
                <td>$customer[surname]</td>
                <td><a href="./delete.php?id=$customer[id]">Usuń</a></td>
            </tr> 
CUSTOMER;
        echo "</table>";
        }
        $connect->close();
    }
    else{
        echo "Błędne połączenie z bazą danych. <br> Error number:",
        $connect->connect_errno, '<br> Error ',$connect->connect->connect_error;
    }
    ?>
</body>
</html>