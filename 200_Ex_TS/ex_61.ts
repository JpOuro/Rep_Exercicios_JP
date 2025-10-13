function a_root(arr) {
    for (let i: number = 0; i < n; i++) {
        let b: number = Math.sqrt(arr[i]);
        arr.splice(i, 1, b);
    }
    return arr;
}
let n = parseInt(prompt("Insira o tamanho do array."));
let arr = [];
for (let i: number = 0; i < n; i++) {
    let a: number = parseInt(prompt("Insira os elementos do array."));
    arr.push(a);
}
a_root(arr);
for (let i: number = 0; i < n; i++) {
    console.log(arr[i]);
}
export{}