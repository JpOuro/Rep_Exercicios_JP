    function odd_sum() {
    let b: number = 0;
    let n: number = parseInt(prompt("Insira o tamanho do array."));
    let arr = [];
    for (let i: number = 0; i < n; i++) {
        let a: number = parseInt(prompt("Insira os elementos do array."));
        arr.push(a);
    }
    for (let i: number = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            b += parseInt(arr[i]);
        }
    }
    return b;
}
console.log(odd_sum());
export{}