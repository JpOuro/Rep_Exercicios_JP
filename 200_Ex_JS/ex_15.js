let f1 = 0;
let nome = prompt("Insira uma palavra.");
let n = nome.length;
for (let i = 0; i < n; i ++) {
    if (nome[i] != nome[n-i-1]) {
        console.log(`A palavra ${nome} não é um palíndromo.`);
        f1 = 1;
        break;
    }
}
if (f1 == 0){
    console.log(`A palavra ${nome} é um palíndromo.`)
}