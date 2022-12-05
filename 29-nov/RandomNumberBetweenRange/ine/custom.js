function generateRandom(min = 5, max = 10) {
    let difference = max - min; 
    let rand = Math.random();

    rand = Math.floor( rand * difference);

    rand = rand + min;

    return rand;
}
document.getElementById('result').innerHTML = generateRandom();