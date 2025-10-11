let n: number = parseInt(prompt("Insira um número."));
function Fibonacci(n: number) {
    let a = 0;
    let b = 1;
    let c;
    if (n == 1) {
        return a;
    }
    else if (n == 2) {
        return b;
    }
    else {
        for (let i = 1; i < n-1; i++) {
            let c = a;
            a = b;
            b = c + b;
        }
        return b;
    }
}
console.log(Fibonacci(n));
export{}