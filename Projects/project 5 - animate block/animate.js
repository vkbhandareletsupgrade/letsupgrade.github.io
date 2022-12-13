function move() {
   
    var yellow = document.getElementById('yellow');//1
    var yellowposition = 0;                         //2
    var animation = setInterval(animate,5);         //3

    function animate() {
        if  (yellowposition == 400) {
            clearInterval(animation); //stop animation
        } else {
            yellowposition++;
            yellow.style.top = yellowposition+"px";
            yellow.style.left = yellowposition+"px";  
        }
    }
}
