let n = parseInt(prompt("Insira um número."));
const arr = [
    {function1(n) {
        return n*2;
    }},
    {functio2(n) {
        return n+1;
    }}
];

function Weird(arr, n) {
    let n_arr = [];
    for (let i = 0; i < 2; i++) {
        n_arr.push(arr[i](n));
    }
    return n_arr;
}
