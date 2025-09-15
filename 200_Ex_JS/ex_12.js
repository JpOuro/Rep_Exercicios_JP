let media = 0;
for (let i = 0; i < 4; i++) {
    let nota = prompt(`Fale a nota do ${i} bimestre`);
    media += parseInt(nota);
}
media = media / 4;
if (media >= 6) {
    console.log("O aluno foi aprovado.");
}
else {
    console.log("O aluno está de recuparação.");
}