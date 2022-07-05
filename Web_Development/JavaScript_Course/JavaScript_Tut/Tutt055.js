// Not cleared
let students = ['John', 'Sara', 'Jack'];

// using forEach
students.forEach(myFunction);

function myFunction(item, index, arr) // All are necessary 
{

    // adding strings to the array elements
    arr[index] = 'Hello ' + item;
}

console.log(students);