function to_realize (fornm1) { 
    var gender; 
    if(document.getElementById('gender_Male').checked) {
        gender = "Mr.";
    }else if(document.getElementById('gender_Female').checked) {
        gender = "Mrs.";
    }
    var str = [ gender, fornm1 ['Name'].value,fornm1 ['Lastname'].value ].join('  ');
    document.getElementById ('tool').innerHTML = str;
    document.getElementById ('modal').style.display = 'block';
    document.getElementById ('form1').style.display = 'none';
}
    document.getElementsByClassName("continue")[0].onclick = function() {
        document.getElementById ('modal').style.color.red;
        fromyou = document.getElementById ('fromyou');
        fromyou.style.display = 'block';
}
function info_cart(form2) {
    var table ="<table ><tr><td> Name: </td> <td>";
    table += form2["name"].value + "</td></tr><tr><td>Surtname: </td> <td>"+ form2["surname"].value + "</td></tr><tr><td>Adress: </td> <td>"+ form2["adress"].value + "</td></tr><tr><td>City: </td> <td>"+ form2["city"].value + "</td></tr><tr><td>Country: </td> <td>"+ form2["country"].value + "</td></tr><tr><td>Phone: </td> <td>"+ form2["phone"].value + "</td></tr> </table>";
    document.getElementById("info-container").innerHTML += table;
    for (var i = 0; i < 6; i++) {
        form2[i].value = "";  
    };
    
}
