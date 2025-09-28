    function min() {
    let n = prompt("Insira o tamanho do array.");
    let arr = [];
    n++;
    for (let i = 0; i < n; i++) {
        let a = prompt("Insira os elementos do array.");
        arr.push(a);
    }
    for (let i = 0; i < n; i++) {
        let min = arr[i];
        let ind;
        for (let j = i; j < n; j++) {
            if (min > arr[j]) {
                min = arr[j];
            }
        }
        return min;
    }
}
console.log(min());