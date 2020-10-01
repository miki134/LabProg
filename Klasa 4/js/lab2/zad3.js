const elem = function(_a, _b, _c, _fun) { 
    return _fun(_a, _b, _c); 
};

function elements1(_a, _b, _c){
    let delta = Math.pow(_b, 2) - 4 * _a * _c;
    if(delta<0)
        return "Brak rozwiazan";
    else if(delta == 0){
        let x = (-1 * (_b) + Math.sqrt(delta)) / 2 * _a;
        return x;
    }
    else{
        let x1 = (-1 * (_b) + Math.sqrt(delta)) / 2 * _a;
        let x2 = (-1 * (_b) - Math.sqrt(delta)) / 2 * _a;
        return {x1, x2};
    }
}
const first =  elem(2, 2, 2, elements1);

const second = elem(1, 2, 1, function(_a, _b, _c){
    let delta = Math.pow(_b, 2) - 4 * _a * _c;
    if(delta<0)
        return "Brak rozwiazan";
    else if(delta == 0){
        let x = (-1 * (_b) + Math.sqrt(delta)) / 2 * _a;
        return x;
    }
    else{
        let x1 = (-1 * (_b) + Math.sqrt(delta)) / 2 * _a;
        let x2 = (-1 * (_b) - Math.sqrt(delta)) / 2 * _a;
        return {x1, x2};
    }
});

const third = elem(1, 5, 6, (_a, _b, _c) => {
    let delta = Math.pow(_b, 2) - 4 * _a * _c;
    if(delta<0)
        return "Brak rozwiazan";
    else if(delta == 0){
        let x = (-1 * (_b) + Math.sqrt(delta)) / 2 * _a;
        return x;
    }
    else{
        let x1 = (-1 * (_b) + Math.sqrt(delta)) / 2 * _a;
        let x2 = (-1 * (_b) - Math.sqrt(delta)) / 2 * _a;
        return {x1, x2};
    }
});

console.log(first);
console.log(second);
console.log(third);