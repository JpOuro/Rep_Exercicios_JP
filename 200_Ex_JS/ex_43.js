let str = prompt();
let resultado = '';
let i = str.length - 1;

  while (i >= 0) {
    resultado += str[i];
    i--;
}
if (str == resultado) {
    console.log("É palíndromo.");
}
else {
    console.log("Não é palíndromo.")
}
