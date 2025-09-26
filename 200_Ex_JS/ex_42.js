let binario = prompt();
let sum = 0;
for (let i = 0; i < binario.length; i++) {
    sum += binario[i]*(2**i);
}