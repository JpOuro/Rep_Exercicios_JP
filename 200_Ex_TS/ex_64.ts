function word_counter(str: string) {
    let a: number = 1;
    let f1: number = 0;
    for (let i: number = 0; i < str.length; i++) {
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
let str: string = prompt("Insira uma frase.");
console.log(word_counter(str));
export{}