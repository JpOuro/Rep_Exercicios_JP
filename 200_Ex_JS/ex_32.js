let f1 = "Sim";
do {
    let min = 0;
    let max = 2;
    let esc = Math.floor(Math.random() * (max - min + 1)) + min;
    let p = prompt("Escolha. (0, 1 , 2), respectivamente s�o pedra, papel e tesoura.");
    if (p == esc) {
    	console.log("Empate.");
    	return;
    }
    else if (p == 0) {
    	if (esc == 2) {
    		console.log("Voc� ganhou.");
    	}
    	else {
    		console.log("Voc� perdeu.");
    	}
    }
    else if (p == 1) {
    	if (esc == 0) {
    		console.log("Voc� ganhou.");
    	}
    	else {
    		console.log("Voc� perdeu.");
    	}
    }
    else if (p == 2) {
    	if (esc == 1) {
    		console.log("Voc� ganhou.");
    	}
    	else {
    		console.log("Voc� perdeu.");
    	}
    }
    f1 = prompt("Voc� quer jogar novamente?");
} while (f1 == "Sim");