let ano = parseInt(prompt("Insira o ano."));
if (ano % 4 == 0) {
    if (ano % 100 == 0) {
        if (ano % 400 == 0){
            console.log(`O ano ${ano} não é bissexto.`);
        }
        else {
            console.log(`O ano ${ano} é bissexto.`);
        }
    }
    else {
        console.log(`O ano ${ano} é bissexto.`);
    }
}
else {
    console.log(`O ano ${ano} não é bissexto.`);
}