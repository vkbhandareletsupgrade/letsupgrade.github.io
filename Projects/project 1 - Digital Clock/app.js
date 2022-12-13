function showTime(){

    let date = new Date();
    let h = date.getHours();
    let m = date.getMinutes();
    let s = date.getSeconds();
    let session = "AM";

    (h > 12) ? session = "PM" : session = "AM";
    (h > 12) ? h = h - 12 : h;

    (h < 10) ? h = "0" + h : h;
    (m < 10) ? m = "0" + m : m;
    (s < 10) ? s = "0" + s : s; 

    document.getElementById('data').innerHTML = `${h} : ${m} : ${s} ${session}`;
    setInterval(showTime,1000);

}
// function run on "body" load