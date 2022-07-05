function init() {
  nm = document.getElementById("name");
  username = document.getElementById("username");
  mobile = document.getElementById("mobile");
  pass = document.getElementById("pass");
  cpass = document.getElementById("cpass");

  err1 = document.getElementById("err1");
  err2 = document.getElementById("err2");
  err3 = document.getElementById("err3");
  err4 = document.getElementById("err4");
  err5 = document.getElementById("err5");
}
function valid() {
  var name = nm.value;
  var uname = username.value;
  var mob = mobile.value;
  var password = pass.value;
  var cpassword = cpass.value;

  if (name.length == 0) {
    err1.innerHTML = "*plz enter name";
    err1.style.color = "red";
  } else {
    err1.innerHTML = "";
  }
  if (uname.length == 0) {
    err2.innerHTML = "*plz enter username";
    err2.style.color = "red";
  } else {
    err2.innerHTML = "";
  }
  if (password.length == 0) {
    err3.innerHTML = "*plz enter password";
    err3.style.color = "red";
  } else if (password.length < 5 || password.length > 8) {
    err3.innerHTML = "*password length 5-8 char";
    err3.style.color = "red";
  } else {
    err3.innerHTML = "";
  }
  if (cpassword.length == 0) {
    err4.innerHTML = "*plz Re-enter password";
    err4.style.color = "red";
  } else {
    err4.innerHTML = "";
  }
  if (mob.length == 0) {
    err5.innerHTML = "*plz enter Mobile";
    err5.style.color = "red";
  } else if (isNaN(mob)) {
    err5.innerHTML = "*plz enter digits";
    err5.style.color = "red";
  } else if (mob.length < 10 || mob.length > 10) {
    err5.innerHTML = "enter only 10 digits";
    err5.style.color = "red";
  } else {
    err5.innerHTML = "";
  }
}
function checkpass() {
  if (cpass.value != pass.value) {
    err4.innerHTML = "Pasword does not match";
    err4.style.color = "red";
  } else {
    err4.innerHTML = "";
  }
}
