function Hello() {
    console.log("Hello World!");
}
function a_sum(arr, Hello) {
    let a: number = 0;
    for (let i: number = 0; i < arr.length; i++) {
        a += arr[i];
    }
    Hello();
    return arr;
}
let arr = [];
let n: number = parseInt(prompt("Insira o tamanho do array."));
for (let i: number = 0; i < n; i++) {
    let a: number = parseInt(prompt("Insira os elementos do array."));
    arr.push(a);
}
a_sum(arr, Hello());
export{}