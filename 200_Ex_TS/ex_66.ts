function One_check(arr, i: number) {
    if (arr[i] == 1) {
        return true;
    }
    else {
        return false;
    }
}
function One_maker(arr, One_check) {
    let b = [];
    for (let i = 0; i < arr.length; i++) {
        if (One_check(arr, i)) {
            b.push(arr[i]);
        }
    }
    return b;
}
let arr = [];
let n: number = parseInt(prompt("Insira o tamanho do array."));
for (let i = 0; i < n; i++) {
    let a: number = parseInt(prompt("Insira os elementos do array."));
    arr.push(a);
}
One_maker(arr, One_check);
export{}