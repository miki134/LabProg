function Osoba(_name, _surname, _age){
    this.name = _name;
    this.surname = _surname;
    this.age = _age;
}

function szukaj(_dane, _name){
    for(let i = 0; i < _dane.length; i++){
        if(_name == dane[i].name){
            console.log(dane[i]);
        }
    }
}

function szukaj(_dane, ...kryt){
    let size = kryt.length;
    for(let i = 0; i < _dane.length; i++){
        if(size == 1){
            if(_dane[i].name == kryt[0]){
                console.log(_dane[i]);
            }
        }
        else if(size == 2){
            if(_dane[i].name == kryt[0] && _dane[i].surname == kryt[1]){
                console.log(_dane[i]);
            }
        }
        else if(size == 3){
            if(_dane[i].name == kryt[0] && _dane[i].surname == kryt[1] && _dane[i].age == kryt[2]){
                console.log(_dane[i]);
            }
        }
    }
}

function znajdzLubDodaj(_dane, ...kryt){
    let size = kryt.length;
    for(let i = 0; i < _dane.length; i++){
        if(size == 1){
            if(_dane[i].name == kryt[0]){
                console.log(_dane[i]);
                return;
            }
        }
        else if(size == 2){
            if(_dane[i].name == kryt[0] && _dane[i].surname == kryt[1]){
                console.log(_dane[i]);
                return;
            }
        }
        else if(size == 3){
            if(_dane[i].name == kryt[0] && _dane[i].surname == kryt[1] && _dane[i].age == kryt[2]){
                console.log(_dane[i]);
                return;
            }
        }
    }
    
    if(size == 1){
        _dane.push(new Osoba(kryt[0], "", null));
    }
    else if(size == 2){
        _dane.push(new Osoba(kryt[0], kryt[1], null));
    }
    else if(size == 3){
        _dane.push(new Osoba(kryt[0], kryt[1], kryt[2]));
    }
    console.log(_dane);
}

let os1 = new Osoba("Jan", "Kowalski", 18);
let os2 = new Osoba("s", "Kowalski", 11);
let os3 = new Osoba("Jssan", "Kowalski", 12);

let dane = [];
dane.push(os1, os2, os3);

szukaj(dane, "Jan", "Kowalski");
znajdzLubDodaj(dane, "Adam", "Nowak", 12);

console.log("koniec");