function prime_array(n: number) {
    let arr = [];
    let f1: number = 0;
    let a: number;
    for (let i: number = 2; i <= n; i++) {
        for (let j: number = 2; j <= i - 1; j++) {
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
let n: number = parseInt(prompt("Insira um número."));
console.log(prime_array(n)[0]);
export{}