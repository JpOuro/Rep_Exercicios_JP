let a = prompt("Insira um número.");
function fatorial(b) {
    let f = 1;
    for (let i = 1; i <= b; i++) {
        f = f * i;
    }
    return f;
}

console.log(fatorial(a));