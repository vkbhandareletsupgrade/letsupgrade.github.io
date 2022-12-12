function clears() {
    document.getElementById('res').value = " ";
}

function display(elem) {
    document.getElementById('res').value += elem;
}

function equate() {
    let x = document.getElementById('res').value;
    let y = eval(x);
    let z = document.getElementById('res').value = y;
}