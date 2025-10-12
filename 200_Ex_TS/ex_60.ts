function a_duplication(arr) {
    for (let i: number = 0; i < n; i++) {
        let b: number = arr[i]*arr[i];
        arr.splice(i, 1, b);
    }
    return arr;
}
let n: number = parseInt(prompt("Insira o tamanho do array."));
let arr = [];
for (let i: number = 0; i < n; i++) {
    let a: number = parseInt(prompt("Insira os elementos do array."));
    arr.push(a);
}
a_duplication(arr);
for (let i: number = 0; i < n; i++) {
    console.log(arr[i]);
}
export{}