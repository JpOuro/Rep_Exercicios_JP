let binario: string = prompt();
let sum: number = 0;
for (let i = 0; i < binario.length; i++) {
    sum += parseInt(binario[i])*(2**i);
}
export{};