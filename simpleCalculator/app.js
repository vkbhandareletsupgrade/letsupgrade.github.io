function cal() {
    var first = document.getElementById('first').value;
    var second = document.getElementById('second').value;
    var opr = document.getElementById('operand').value;
    switch (opr) {

        case '+':
            var result = parseInt(first) + parseInt(second);
            break;
        case '-':
            var result = parseInt(first) - parseInt(second);
            break;
        case '/':
            var result = parseInt(first) / parseInt(second);
            break;
        case '*':
            var result = parseInt(first) * parseInt(second);
            break;
    }
   
    document.getElementById('show').value = `Answer : ${result}`;
}