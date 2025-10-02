let a: number = parseInt(prompt("Insira a primeira nota do aluno."));
let b: number = parseInt(prompt("Insira a segunda nota do aluno."));
let c: number = (a + b) /2;
if (c >= 7) {
    console.log("O aluno foi aprovado.");
}
else {
    console.log("O aluno foi reprovado.");
}
export{}