const result =document.getElementById('res');
let num = 1;
let inter;

const start = () =>{
    inter = setInterval(() => {
        result.innerHTML = num++;
    }, 1000);
}
const stop = () =>{
    clearInterval(inter);
}
const reset = () =>{
    clearInterval(inter);
    num = 0;
    res.innerHTML = num;
}