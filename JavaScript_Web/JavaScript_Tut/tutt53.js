// console.log("THis is external js file");
// let name = "Niranjan";
// let name1 = "Sachin";
// let name2 = "Swapnil";
// let name3 = "Baser";
// let name4 = "Kumavat";

//     console.log(name + " " + "is a good boy");
//     console.log(name1 + " " + "is a good boy");
//     console.log(name2 + " " + "is a good boy");
//     console.log(name3 + " " + "is a good boy");
//     console.log(name4 + " " + "is a good boy");

// As we can see in the above example, we are writing a particular set of codes every time. To avoid this JavaScript functions come into action. We can write the above code with the help of JavaScript functions

// function Names(name) {
//   console.log(name + " " + "is a good boy");
// }
// let name = "Niranjan";
// let name1 = "Sachin";
// let name2 = "Swapnil";
// let name3 = "Baser";
// let name4 = "Kumavat";

// Names(name);
// Names(name1);
// Names(name2);
// Names(name3);
// Names(name4);

// function buddy(sachin, text) {
//   console.log(text + " " + sachin);
// }

// let name = "Niranjan";
// let name1 = "Sachin";
// let name2 = "Swapnil";
// let name3 = "Baser";
// let name4 = "Kumavat";
// let greetText = "Good Morning";

// buddy(name, greetText);
// buddy(name1, greetText);
// buddy(name2, greetText);
// buddy(name3, greetText);
// buddy(name4, greetText);

function sum(x, y, z) {
  let d = x + y + z;
  return d;
}
// var add = sum(23, 34, 54);
// console.log(add);

let a = 1,
  b = 2,
  c = 3;
let result = sum(a, b, c);
console.log("Sum of a , b & c = ", result);
