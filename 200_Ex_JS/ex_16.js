let a = prompt("Insira um número.");
let b = prompt("Insira um número.");
let c = prompt("Insira um número.");
if (a == b) {
    if (b == c) {
        console.log("Os três números são iguais.")
    }
}
if (a > b) {
    if (a > c) {
        console.log(`${a} é o maior dos números inseridos.`)
    }
    else if (a < c) {
        console.log(`${c} é o maior dos números inseridos.`)
    }
}
else if (a < b) {
    if (b > c) {
        console.log(`${b} é o maior dos números inseridos.`)
    }
    else if (b < c) {
        console.log(`${c} é o maior dos números inseridos.`)
    }
}
