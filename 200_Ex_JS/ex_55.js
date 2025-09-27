    function max() {
    let n = prompt("Insira o tamanho do array.");
    let arr = [];
    n++;
    for (let i = 0; i < n; i++) {
        let a = prompt("Insira os elementos do array.");
        arr.push(a);
    }
    for (let i = 0; i < n; i++) {
        let max = arr[i];
        let ind;
        for (let j = i; j < n; j++) {
            if (max < arr[j]) {
                max = arr[j];
            }
        }
        return max;
    }
}
console.log(max());