const getColor = () =>{

    const randomNumber = Math.floor(Math.random() * 16777215);
    const makehexcode = "#" + randomNumber.toString(16);
    document.getElementById('btn').style.backgroundColor = makehexcode;
    document.body.style.backgroundColor = makehexcode;
    document.getElementById('hexcode').innerText = makehexcode;
    navigator.clipboard.writeText(makehexcode);
}

document.getElementById('btn').addEventListener('click',getColor);
getColor();
