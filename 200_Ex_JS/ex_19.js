let a = parseInt(prompt("Insira o início do intervalo."));
let b = parseInt(prompt("Insira o fim do intervalo."));
let c = parseInt(prompt("Insira o número o qual você deseja verificar."));
if (c >= a) {
    if (c <= b) {
        console.log("Seu número está dentro do intervalo.");
    }
    else {
        console.log("Seu número não está dentro do intervalo.");
    }
}
else {
    console.log("Se");
    console.log("Seu número não está dentro do intervalo.");
}