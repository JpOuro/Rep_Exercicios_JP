alert("Escolha um n�mero de 1 a 100.");
let l: number = 0;
let h: number = 100;
let f1: number = 0
while (l < h && f1 == 0) {
    let m: number = l + (h - l) / 2;
    if (!Number.isInteger(m)) {
        m = m + 1;
    }
    let p = prompt(`Seu n�mero � maior, menor, ou igual a ${m}?`);
    if (p == "maior") {
        l = m;
    }
    else if (p == "menor") {
        h = m;
    }
    else {
        f1 = 1;
        console.log(":D");
    }
}
export{}