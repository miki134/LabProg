function sumOdc(...tab){
    if(tab.length % 2 != 0 || tab.length < 4)
        return "error";
    let size = 0;
    for(let i= 0; i<tab.length-3;i+=2)
        size += Math.abs(Math.sqrt((tab[i + 2] - tab[i]) ** 2 + (tab[i + 1] - tab[i + 3]) ** 2));
    return size;
}

console.log(sumOdc(0 , 0, 3 , 4));