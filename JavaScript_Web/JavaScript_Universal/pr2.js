function init() {
    fname = document.getElementById('fname');
    err1 = document.getElementById('errr1');
}

function valid() {
    var fnm = fname.value;

    if (fnm.length == 0) {
        err1.innerHTML = "Please enter First Name";
        err1.style.color = "red";
    }
    else {
        err1.innerHTML = "";
    }
}