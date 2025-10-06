for (let i: number = 2; i <= 100; i++) {
    let f1: number = 0;
    for (let j = 2; j <= i - 1; j++) {
        let a: number = i / j;
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
export{}