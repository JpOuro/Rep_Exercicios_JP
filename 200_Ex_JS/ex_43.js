let str = prompt();
let resultado = '';
let i = str.length - 1;

  while (i >= 0) {
    resultado += str[i];
    i--;
}
if (str == resultado) {
    console.log("� pal�ndromo.");
}
else {
    console.log("N�o � pal�ndromo.")
}
