let n: number = parseInt(prompt("Insira um número de repetições."));
let m: number = parseInt(prompt("Insira um valor inicial."));
const arr = [
    {function1(n) {
        return n*2;
    }},
    {functio2(n) {
        return n+1;
    }}
];

function Weird(n, arr, m) {
    let n_arr = [];
    for (let i = 0; i < n_arr.length; i++) {
        for (let j = 0; j < n; j++) {
            n_arr.push(arr[i](m));
        }
    }
    return n_arr;
}
Weird(n, arr, m);
export{}