var database= firebase.database();


function startsve(){
var fm=document.getElementById("fm").value;
var lm=document.getElementById("lm").value;
var em=document.getElementById("em").value;
var g=document.querySelector('input[name = "ab"]:checked').value;
var mb =document.getElementById("mb").value;
var um =document.getElementById("um").value;
var pd= document.getElementById("pd").value;
writeUserData(fm,lm,em,pd,g,mb,um);


}

function writeUserData(fm,lm,em,pd,g,mb,um) {
    firebase.database().ref('users/' + fm +lm).set({
      Name: fm +lm,
      Username: um,
      email: em,
      gender: g,
      password : pd,
      mobile : '+91' +mb
    });
  }



