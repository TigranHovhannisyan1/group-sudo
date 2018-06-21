function init() {
	var a = Number(document.getElementById("first").value);
	var b = Number(document.getElementById("second").value);
	var result = 0;
	function adding () {
		result = a+b;
	}
	function subtraction () {
		result = a-b;
	}
	function division () {
		result = a/b;
	}
	function multiplication () {
		result = a*b;
	}
	function getResult () {
		alert(result);
	}
	document.getElementById("add").onclick = adding;
	document.getElementById("sub").onclick = subtraction;
	document.getElementById("div").onclick = division;
	document.getElementById("mul").onclick = multiplication;
	document.getElementById("equ").onclick = getResult;
}

window.onload = init;