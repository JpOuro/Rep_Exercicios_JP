let f1: number = 0;
let n: number = parseInt(prompt("Insira um número."));
function Prime_check(n) {
    for (let j = 2; j <= n/2; j++) {
        let a = n / j;
        if (Number.isInteger(a)) {
            f1 = 1;
            break;
        }
    }
    if (f1 == 0) {
        return "Primo.";
    }
    else {
        return "N�o � primo.";
    }
}
console.log(Prime_check(n));
export{}