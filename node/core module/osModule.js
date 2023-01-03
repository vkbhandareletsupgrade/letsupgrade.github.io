const os = require('os');
console.log(os.freemem());// 411885568--  Returns the number of free memory of the system info about os , about free memory.
console.log(os.totalmem());// 4210606080--  info about os , about total available memory.
console.log(os.homedir());// C:\Users\ADMIN-- info about home dir , path of file.
console.log(os.hostname());// DESKTOP-OA4425P-- info about system desktop name.
console.log(os.platform());// win32 -- Returns information about the operating system's platform.
console.log(os.arch());// x64 -- Returns the operating system CPU architecture
console.log(os.userInfo());// Returns information about the current user.
// {
//     uid: -1,
//     gid: -1,
//     username: 'ADMIN',
//     homedir: 'C:\\Users\\ADMIN',
//     shell: null
//   } 
console.log(os.cpus());// Returns an array containing information about the computer's CPUs
// [
//     {
//       model: 'Intel(R) Core(TM) i3-5005U CPU @ 2.00GHz',
//       speed: 1995,
//       times: {
//         user: 2554890,
//         nice: 0,
//         sys: 2011046,
//         idle: 18749250,
//         irq: 361343
//       }
//     },
//     {
//       model: 'Intel(R) Core(TM) i3-5005U CPU @ 2.00GHz',
//       speed: 1995,
//       times: {
//         user: 2566125,
//         nice: 0,
//         sys: 1380140,
//         idle: 19368703,
//         irq: 53218
//       }
//     },
//     {
//       model: 'Intel(R) Core(TM) i3-5005U CPU @ 2.00GHz',
//       speed: 1995,
//       times: {
//         user: 3101656,
//         nice: 0,
//         sys: 1452296,
//         idle: 18761015,
//         irq: 30265
//       }
//     },
//     {
//       model: 'Intel(R) Core(TM) i3-5005U CPU @ 2.00GHz',
//       speed: 1995,
//       times: {
//         user: 2922953,
//         nice: 0,
//         sys: 1289593,
//         idle: 19102406,
//         irq: 24562
//       }
//     }
//   ]