let str = prompt();
let resultado = '';
let i = str.length - 1;

  while (i >= 0) {
    resultado += str[i];
    i--;
}
console.log(resultado);
