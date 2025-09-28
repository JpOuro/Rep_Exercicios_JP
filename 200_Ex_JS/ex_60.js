function a_duplication(arr) {
    for (let i = 0; i < n; i++) {
        let b = arr[i]*arr[i];
        arr.splice(i, 1, b);
    }
    return arr;
}
let n = prompt("Insira o tamanho do array.");
let arr = [];
for (let i = 0; i < n; i++) {
    let a = prompt("Insira os elementos do array.");
    arr.push(a);
}
a_duplication(arr);
for (let i = 0; i < n; i++) {
    console.log(arr[i]);
}