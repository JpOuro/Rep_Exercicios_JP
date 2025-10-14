let n = parseInt(prompt("Insira o tamanho do array."));
let arr = [];
for (let i = 0; i < n; i++) {
    let a = parseInt(prompt());
    arr.push(a);
}

function OddFinder(arr) {
    let n_arr = [];
    for (let a = 0; a < arr.length; a++) {
        if (arr[a] % 2 != 0) {
            n_arr.push(arr[a]);
        }
    }
    return n_arr;
}

function ArrayCleaner(func, arr) {
    return func(arr);
}