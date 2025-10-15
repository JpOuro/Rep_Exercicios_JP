const arr = [1, 2, 3];
function Weird(arr, func) {
    let n_arr = [];
    for (let i = 0; i < n_arr.length; i++) {
        n_arr = func(arr[i]);
    }
    return n_arr;
}
function doubler(n) {
    return n*2;
}
Weird(arr, doubler);
export{}