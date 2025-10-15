let n = parseInt(prompt("Insira um valor inicial."));
const arr = [
    {function1(n) {
        return n*2;
    }},
    {functio2(n) {
        return n+1;
    }}
];

function Weird(n, arr) {
    let n_arr = [];
    for (let i = arr.length - 1; i > -1; i--) {
        n_arr.push(arr[i](n));
    }
    return n_arr;
}
Weird(n, arr);
