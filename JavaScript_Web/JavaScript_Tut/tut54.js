/*Alert, Prompt, Confirm*/
// Alert -
// if we want a message and ok before entering a pag
console.log("Alert, Prompt, Confirm in JavaScript");
// // alert("This is alert function");
// // // Prompt -
// // // if we want input a value before entering a page
// let name = prompt("What is your name ?");
// // // we can set an default name as this
// name = prompt();
// name = prompt("What is your name ?", "Guest");

// console.log(name)
let del = confirm("Do you really want to delete..?");
if (del == 1) {
  console.log("Deleted");
} else {
  console.log("Not Deleted");
}
