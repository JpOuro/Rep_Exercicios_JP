    function Sort() {
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
                ind = j; 
            }
        }
        arr[ind] = arr[i];
        arr[i] = max;
    }
    for (let i = 0; i < n; i++) {
        console.log(arr[i]);
    }
}
Sort();