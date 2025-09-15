let altura = parseInt(prompt("Insira sua altura."));
let peso = parseInt(prompt("Insira seu peso."));
let IMC = peso / (altura ** 2);
if (IMC >= 30 && IMC < 34.9) {
    console.log("Você sofre de obesidade.");
}
else if (IMC < 18.5) {
    console.log("Você está abaixo do peso.");
}
else if (IMC >= 18.5 && IMC < 25) {
    console.log("Você está com peso normal.");
}
else if (IMC >= 25 && IMC < 30) {
    console.log("Você está com sobrepeso.");
}