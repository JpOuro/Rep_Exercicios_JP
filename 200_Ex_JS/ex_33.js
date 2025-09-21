let a = 0;
let b = 1;
let c;
console.log(a);
for (let i = 1; i < 10; i++) {
    let c = a;
    a = b;
    b = c + b;
    console.log(a);
}