let n = prompt("Insira o número de linhas.");
let m = prompt("Insira o número de colunas.");
let matrix = [];
for (let i = 0; i < n; i++) {
    row = [];
    for (let j = 0; j < m; j++) {
        let a = prompt("Insira os elementos em ordem.");
        row.push(a);
    }
    matrix.push(row);
}
console.log(matrix);
function matrix_proc(matrix, vector_proc) {
    let b = [];
    for (let i = 0; i < n; i++) {
        b[i] = vector_proc(matrix, i);
    }
    return b;
}
function vector_proc(matrix, i) {
    return matrix[i][i];
}
console.log(matrix_proc(matrix, vector_proc));
