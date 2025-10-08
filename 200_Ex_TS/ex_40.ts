let str: string = prompt();
let resultado: string = '';
let i: number = str.length - 1;

  while (i >= 0) {
    resultado += str[i];
    i--;
}
console.log(resultado);
export{};