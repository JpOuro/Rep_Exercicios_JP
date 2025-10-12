    function max() {
    let n = parseInt(prompt("Insira o tamanho do array."));
    let arr = [];
    n++;
    for (let i: number = 0; i < n; i++) {
        let a: number = parseInt(prompt("Insira os elementos do array."));
        arr.push(a);
    }
    for (let i = 0; i < n; i++) {
        let max: number = arr[i];
        for (let j = i; j < n; j++) {
            if (max < arr[j]) {
                max = arr[j];
            }
        }
        return max;
    }
}
console.log(max());
export{}