    function odd_sum() {
    let b = 0;
    let n = prompt("Insira o tamanho do array.");
    let arr = [];
    for (let i = 0; i < n; i++) {
        let a = prompt("Insira os elementos do array.");
        arr.push(a);
    }
    for (let i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            b += parseInt(arr[i]);
        }
    }
    return b;
}
console.log(odd_sum());