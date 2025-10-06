let f1: string = "Sim";
do {
    let min:number = 0;
    let max: number = 2;
    let esc: number = Math.floor(Math.random() * (max - min + 1)) + min;
    let p: number = parseInt(prompt("Escolha. (0, 1 , 2), respectivamente são pedra, papel e tesoura."));
    if (p == esc) {
    	console.log("Empate.");
    	break;
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