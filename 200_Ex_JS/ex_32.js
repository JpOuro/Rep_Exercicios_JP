let f1 = "Sim";
do {
    let min = 0;
    let max = 2;
    let esc = Math.floor(Math.random() * (max - min + 1)) + min;
    let p = prompt("Escolha. (0, 1 , 2), respectivamente são pedra, papel e tesoura.");
    if (p == esc) {
    	console.log("Empate.");
    	return;
    }
    else if (p == 0) {
    	if (esc == 2) {
    		console.log("Você ganhou.");
    	}
    	else {
    		console.log("Você perdeu.");
    	}
    }
    else if (p == 1) {
    	if (esc == 0) {
    		console.log("Você ganhou.");
    	}
    	else {
    		console.log("Você perdeu.");
    	}
    }
    else if (p == 2) {
    	if (esc == 1) {
    		console.log("Você ganhou.");
    	}
    	else {
    		console.log("Você perdeu.");
    	}
    }
    f1 = prompt("Você quer jogar novamente?");
} while (f1 == "Sim");