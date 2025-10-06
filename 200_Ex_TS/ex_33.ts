let a: number = 0;
let b: number = 1;
let c: number;
console.log(a);
for (let i = 1; i < 10; i++) {
    let c = a;
    a = b;
    b = c + b;
    console.log(a);
}
export{}