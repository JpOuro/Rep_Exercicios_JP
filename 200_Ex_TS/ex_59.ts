function a_duplication(arr) {
    for (let i: number = 0; i < arr.length; i += 2) {
        arr.splice(i+1, 0, arr[i]);
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
for (let i: number = 0; i < arr.length; i++) {
    console.log(arr[i]);
}
export{}