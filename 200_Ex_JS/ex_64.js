function word_counter(str) {
    let a = 1;
    let f1 = 0;
    for (let i = 0; i < str.length; i++) {
        if (str[i] == " " && f1 == 0) {
            a++;
            f1 = 1;
        }
        else if (str[i] != " ") {
            f1 = 0;
        }
    }
    return a;
}
str = prompt("Insira uma frase.");
console.log(word_counter(str));