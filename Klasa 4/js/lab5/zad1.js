function Osoba(_n,_s,_a)
{
  this.name = _n;
  this.surname = _s;
  this.age = _a;
}
//nadpisanie metody toString

//krok 1 - definicja funkcji  - nazwa dowolna

function Osoba_toString()
{
  let s = String(this.name);
  s = s.concat(" ", this.surname, ", ", this.age);
  return s;
}

//krok 2 - przypisanie  metody do prototypu Osoba
Osoba.prototype.toString = Osoba_toString;

//test
let o1 = new Osoba("Jan", "Kowalski", 20);
console.log(o1.toString());


//test dwóch metod z Object

console.log(o1.hasOwnProperty('name'));//true
console.log(Object.prototype.isPrototypeOf(o1)); //true
console.log(String.prototype.isPrototypeOf(o1)); //false

//definicja właściwości obiektu przez defineProperty
var person = {};
Object.defineProperty(
  person,
  "legs",
  {
    value: 2,
    writable: true,
    configurable: true,
    enumerable: true,
  },

);

//inna właściwość z deskryptorem enumerable == false - niewyliczalna

Object.defineProperty(
  person,

  "head",
  {
    value: 1,
    writable: true,
    configurable: true,
    enumerable: false,
  },
);

//testy
console.log(Object.keys(o1));
for(let i =0; i< Object.keys(o1).length; i++)
 console.log(Object.keys(o1)[i]);

//właściwość niewyliczalna nie pokazuje się się w pętli for 
console.log(Object.keys(person));
for (let i = 0; i < Object.keys(person).length; i++) {
  console.log(Object.keys(person)[i]);
}


//-----------------------------------------------


//metoda call z typu Function - zmiana kontekstu this

var worker = {
  work: "matematyk",
  speak: function () {
    console.log("Pracuję jako " + this.work);
  },
};

var developer = {
  work: "programista",
};
worker.speak(); //Pracuję jako matematyk
//developer.speak(); //Błąd - Obiekt developer nie ma metody speak
worker.speak.call(developer); //Pracuję jako programista

var osoba = {
  showAge: function (name) {
    console.log(name + " ma " + this.age + " lat");
  },
};
var male = {
  age: 29,
  name: "Mirek",
};
var female = {
  age: 18,
  name: "Katarzyna",
};
osoba.showAge("Paweł");

//metoda call z parametrami

osoba.showAge.call(male, male.name = "Jan");
osoba.showAge.call(female, female.name);

console.log(Object.entries(male));

console.log("koniec");