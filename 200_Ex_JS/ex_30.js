for (let i = 2; i <= 100; i++) {
    let f1 = 0;
    for (let j = 2; j <= i - 1; j++) {
        let a = i / j;
        if (Number.isInteger(a)) {
            f1 = 1;
            break;
        }
    }
        if (f1 == 0) {
            console.log(`${i} é primo.`);
        }
        else {
            console.log(`${i} não é primo.`);
        }
}