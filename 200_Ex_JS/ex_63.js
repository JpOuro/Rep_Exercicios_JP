function prime_array(n) {
    let arr = [];
    let f1 = 0;
    let a;
    for (let i = 2; i <= n; i++) {
        for (let j = 2; j <= i - 1; j++) {
            a = i / j;
            if (Number.isInteger(a)) {
                f1 = 1;
                break;
            }
        }
        if (f1 == 0) {
            arr.push(i);            
        }
        else {
            f1 = 0;
        }
    }
    return arr;
}
let n = prompt("Insira um número.");
console.log(prime_array(n)[0]);