let media: number = 0;
for (let i = 0; i < 4; i++) {
    let nota: number = parseInt(prompt(`Fale a nota do ${i} bimestre`));
    media += nota;
}
media = media / 4;
if (media >= 6) {
    console.log("O aluno foi aprovado.");
}
else {
    console.log("O aluno está de recuparação.");
}
export{}