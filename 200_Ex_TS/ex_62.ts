function str_repeater(n: number) {
    let a: string = "";
    for (let i: number = 0; i < n; i++) {
        a += "String";
    }
    return a;
}
let n = parseInt(prompt("Insira um número."));
console.log(str_repeater(n));
export{}