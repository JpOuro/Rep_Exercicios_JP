function odd(a: number) {
    if (a % 2 == 0) {
        return "Par";
    }
    else {
        return "Ímpar";
    }
    return a*a;
}
console.log(odd(3));
console.log(odd(4));
export{}
