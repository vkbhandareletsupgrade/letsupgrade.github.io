const cal = () =>{

    const physics = document.getElementById('phy').value;
    const chemistry = document.getElementById('chem').value;
    const math = document.getElementById('math').value;
    const biology = document.getElementById('bio').value;
    
    let total = parseFloat(physics) + parseFloat(chemistry) +
                parseFloat(math) + parseFloat(biology);
    let percentage = (total / 400) * 100;
    let newperc = percentage.toFixed(2);
    document.getElementById('res').innerHTML = `Out of 400 Marks You Get ${total} Marks , and Your Percentage is ${newperc}% `;
}