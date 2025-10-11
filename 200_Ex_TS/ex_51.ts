let a: number = parseInt(prompt("Insira um número."));
function fatorial(b: number) {
    let f = 1;
    for (let i = 1; i <= b; i++) {
        f = f * i;
    }
    return f;
}

console.log(fatorial(a));
export{}