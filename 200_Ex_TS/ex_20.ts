let a: number = parseInt(prompt("Insira a nota do aluno"));
if (a <= 3) {
    console.log("A nota do aluno foi abaixo da m�dia esperada.");
}
else if (a <= 6) {
    console.log("A nota do aluno � mediana.");
}
else {
    console.log("A nota do aluno foi excelente.");
}
export{}