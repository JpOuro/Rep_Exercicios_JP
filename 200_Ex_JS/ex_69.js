let n = parseInt(prompt("Insira um número."));

function Hello() {
    console.log("Hello World!");
    return 0;
}

function Repeater(func, n) {
    while (n--){
        func();
    }
}

