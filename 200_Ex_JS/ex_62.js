function str_repeater(n) {
    let a = "";
    for (let i = 0; i < n; i++) {
        a += "String";
    }
    return a;
}
let n = prompt("Insira um número.");
console.log(str_repeater(n));