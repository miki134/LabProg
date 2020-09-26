//Mikołaj Napierała 4D

function sq(arg){
    return Math.pow(arg, 2);
}

const first = sq(2);
const second = (function(a) {
    return Math.pow(a, 2);
})(2);

console.log(first, second);


