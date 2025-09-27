let f1 = 0;
let n = prompt("Insira um número.");
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
        return "Não é primo.";
    }
}
console.log(Prime_check(n));