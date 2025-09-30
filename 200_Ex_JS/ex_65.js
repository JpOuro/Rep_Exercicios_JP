function Hello() {
    console.log("Hello World!");
}
function a_sum(arr, Hello) {
    let a = 0;
    for (let i = 0; i < arr.length; i++) {
        a += arr[i];
    }
    Hello();
    return arr;
}
let arr = [];
let n = prompt("Insira o tamanho do array.");
for (let i = 0; i < n; i++) {
    let a = prompt("Insira os elementos do array.");
    arr.push(a);
}
a_sum(arr, Hello());
