function to_realize (fornm1) { 
    var gender; 
    if(document.getElementById('gender_Male').checked) {
        gender = "Mr.";
    }else if(document.getElementById('gender_Female').checked) {
        gender = "Mrs.";
    }
    var str = [ gender, fornm1 ['Name'].value,fornm1 ['Lastname'].value ].join('  '); 
    document.getElementById ('tool').innerHTML = str;
    document.getElementById ('form1').style.display = 'none';
    document.getElementById ('container-form1').style.display = 'none';
    fromyou = document.getElementById ('fromyou');
    fromyou.style.display = 'block';
    localStorage.setItem('form1', true);
    localStorage.setItem('str', str);
}

function info_cart(form2) {
    user = {"name": form2["name"].value, "surname": form2["surname"].value, "adress": form2["adress"].value, "city": form2["city"].value, "country": form2["country"].value, "phone": form2["phone"].value}
    var table ='';
    saveLS();
    table +=  createTable(user);
    document.getElementById("info-container").innerHTML += table;
    for (var i = 0; i < 6; i++) {
        form2[i].value = "";  
    };
}
function createTable(user) {
    if (!user) {
        return '<p></p>';
    }
    return "<table ><tr><td> Name: </td> <td>" + user.name +"</td></tr><tr><td>Surtname: </td> <td>"+  user.surname
     + "</td></tr><tr><td>Adress: </td> <td>"+ user.adress + "</td></tr><tr><td>City: </td> <td>"+ user.city + "</td></tr><tr><td>Country: </td> <td>"+ 
    user.country + "</td></tr><tr><td>Phone: </td> <td>"+ user.phone + "</td></tr> </table>";
}
function saveLS() {
    count = localStorage.getItem('count');
    count++;
    var user = {"name": form2["name"].value, "surname": form2["surname"].value, "adress": form2["adress"].value, "city": form2["city"].value, "country": form2["country"].value, "phone": form2["phone"].value};
    localStorage.setItem('user'+String(count), JSON.stringify(user));
    localStorage.setItem('count', count);
}
 function getLS() {
    count = localStorage.getItem('count') || 1;
    for (var i = 1; i <= count; i++) {
        var user = localStorage.getItem("user" + String(i));
        user = JSON.parse(user);
        var table ='';
        table +=  createTable(user);
        document.getElementById("info-container").innerHTML += table;
    }
}
window.onload = function() {
    if(localStorage.getItem('form1')) {
        document.getElementById ('container-form1').style.display = 'none';
        document.getElementById ('tool').innerHTML = localStorage.getItem('str');
    }
    count = localStorage.getItem('count') || 0;
    getLS();
}