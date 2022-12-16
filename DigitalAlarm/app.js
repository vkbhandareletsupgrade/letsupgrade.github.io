const audio = new Audio("/music.wav");
audio.loop = true;
let alarmTime = null;
let alarmTimeout = null;
function showTime(){

    let date = new Date();
    let h = date.getHours();
    let m = date.getMinutes();
    let s = date.getSeconds();
    let session = "";

    (h > 12) ? session = "PM" : session = "AM";
    (h > 12) ? h = h - 12 : h;

    (h < 10) ? h = "0" + h : h;
    (m < 10) ? m = "0" + m : m;
    (s < 10) ? s = "0" + s : s; 

    document.getElementById('data').innerHTML = `${h} : ${m} : ${s} ${session}`;
    setInterval(showTime,1000);
}function setAlarmTime(value) {
    alarmTime = value;
  }
  
  function setAlarm() {
    if (alarmTime) {
      const current = new Date();
      const timeToAlarm = new Date(alarmTime);
  
      if (timeToAlarm > current) {
        const timeout = timeToAlarm.getTime() - current.getTime();
        alarmTimeout = setTimeout(function() {
          audio.play();
        }, timeout);
        alert("Alarm set");
      }
    }
  }
  
  // Step 4 - Clear the Alarm
  function clearAlarm() {
    audio.pause();
    if (alarmTimeout) {
      clearTimeout(alarmTimeout);
      alert("Alarm cleared");
    }
  }