setInterval(()=>{

    const date = new Date();
    // get hr mn sc from system
    const hour = date.getHours();
    const minute = date.getMinutes();
     const second = date.getSeconds();

    // formulas to get hr mn sc
    let getHours = 30 * hour + minute/2; 
    let getMinutes = 6 * minute; 
    let getSeconds = 6 * second;

    // to rotate clock hands
    hr.style.transform = `rotate(${getHours}deg)`;
    mn.style.transform = `rotate(${getMinutes}deg)`;
    sc.style.transform = `rotate(${getSeconds}deg)`;
}, 1000);