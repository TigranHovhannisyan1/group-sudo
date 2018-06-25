function init() {
	var result = 0;
	function adding () {
		var a = Number(document.getElementById("first").value);
		var b = Number(document.getElementById("second").value);
		result = a+b;
	}
	function subtraction () {
		
		var a = Number(document.getElementById("first").value);
		var b = Number(document.getElementById("second").value);
		result = a-b;
	}
	function division () {
		var a = Number(document.getElementById("first").value);
		var b = Number(document.getElementById("second").value);
		result = a/b;
	}
	function multiplication () {
		var a = Number(document.getElementById("first").value);
		var b = Number(document.getElementById("second").value);
		result = a*b;
	}
	function getResult () {
		alert(result.toFixed(5));
	}
	document.getElementById("add").onclick = adding;
	document.getElementById("sub").onclick = subtraction;
	document.getElementById("div").onclick = division;
	document.getElementById("mul").onclick = multiplication;
	document.getElementById("equ").onclick = getResult;
}

window.onload = init;