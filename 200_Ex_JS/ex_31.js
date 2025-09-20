alert("Escolha um número de 1 a 100.");
let l = 0;
let h = 100;
let f1 = 0
while (l < h && f1 == 0) {
    let m = l + (h - l) / 2;
    if (!Number.isInteger(m)) {
        m = m + 1;
        m = parseInt(m);
    }
    m = parseInt(m);
    let p = prompt(`Seu número é maior, menor, ou igual a ${m}?`);
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