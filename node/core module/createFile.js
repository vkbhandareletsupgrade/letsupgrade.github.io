// the main difference between console.log() and console.dir() method is ,
// console.log() method represent toString() representation of any object pass
// to it.

// while console.dir() mehtod displays an list of object properties

const fs = require("fs");
const path = require("path");

fs.mkdir(path.join(__dirname, "test"), (err) => {
  if (err) {
    return console.error(err);
  }
  console.log("Folder created successfully!");
});
//mkdir use to create folders

