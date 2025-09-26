function StrInvert(str) {
    let resultado = '';
    let i = str.length - 1;

    while (i >= 0) {
        resultado += str[i];
        i--;
    }
    return resultado;
}
let a = prompt("Insira uma string.");
console.log(StrInvert(a));