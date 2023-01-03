const fs = require("fs");
const path = require("path");

fs.mkdir(path.join(__dirname, "test"), (err) => {
  if (err) {
    return console.error(err);
  }
  console.log("Folder created successfully!");
});
//mkdir use to create folders