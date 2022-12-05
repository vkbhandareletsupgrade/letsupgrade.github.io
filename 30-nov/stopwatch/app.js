const result =document.getElementById('res');
        let num = 1;
        let interval;

        const start = () =>{
            interval = setInterval(() => {
                result.innerHTML = num++;
            }, 1000);
        }
        const stop = () =>{
            clearInterval(interval);
        }
        const reset = () =>{
            clearInterval(interval);
            num = 0;
            res.innerHTML = num;
        }