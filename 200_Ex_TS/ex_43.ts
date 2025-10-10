let str: string = prompt();
let resultado: string = '';
let i: number = str.length - 1;

  while (i >= 0) {
    resultado += str[i];
    i--;
}
if (str == resultado) {
    console.log("  pal ndromo.");
}
else {
    console.log("N o   pal ndromo.")
}
export{};