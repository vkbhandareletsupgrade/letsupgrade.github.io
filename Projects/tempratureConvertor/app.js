var cel = document.getElementById('celcius');
var fah = document.getElementById('fahrenheit');

cel.addEventListener('input',function(){
    let c = this.value;
    let cformula = ( c * 9/5) + 32;
    if(!Number.isInteger(cformula)){
        cformula =cformula.toFixed(4)
    }
    fah.value = cformula;
});

fah.addEventListener('input',function(){
    let f = this.value;
    let fFormula = ( f - 32) * 5/9;
    cel.value = fFormula;
    if(!Number.isInteger(fFormula)){
        fFormula =fFormula.toFixed(4)
    }
    cel.value=fFormula;
});