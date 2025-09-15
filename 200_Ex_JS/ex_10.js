let nota1 = parseInt(prompt("Insira a primeira nota do aluno."));
let nota2 = parseInt(prompt("Insira a segunda nota do aluno."));
let media = (nota1 + nota2) / 2;
if (media >= 7) {
    console.log("O aluno foi aprovado.");
}
else {
    console.log("O aluno não foi aprovado.");
}