function odd(a) {
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