class Jogador {
    protected estado: string;
    constructor() {
        this.estado = "Offline";
    }
}

class Online extends Jogador {
    ficarOnline() {
        if (this.estado == "Offline") {
            this.estado = "Online";
            console.log("O jogador está online.");
        }
        else {
            console.log("Falha: O jogador não pode ficar online caso já esteja online, em jogo, pausado ou desconectado.");
        }
    }
}

class IniciarJogo extends Jogador {
    iniciarJogo() {
        if (this.estado == "Online" || this.estado == "Pausado") {
            this.estado = "Em Jogo";
            console.log("O jogador está em jogo.");
        }
        else {
            console.log("Falha: O jogador não pode iniciar o jogo caso esteja offline, em jogo, ou desconectado.");
        }
    }
}

class Offline extends Jogador {
    ficarOffline() {
        if (this.estado == "Online") {
            this.estado = "Offline";
            console.log("O jogador está offline.");
        }
        else {
            console.log("Falha: O jogador não pode ficar offline caso já esteja offline, ou pausado.");
        }
    }
}

class Pausado extends Jogador {
    Pausar() {
        if (this.estado == "Em Jogo") {
            this.estado = "Pausado";
            console.log("O jogador está pausado.");
        }
        else {
            console.log("Falha: O jogador não pode pausar caso não esteja em jogo.");
        }
    }
}

class Desconectado extends Jogador {
    Desconectar() {
        if (this.estado == "Em Jogo" || this.estado == "Pausado") {
            this.estado = "Offline";
            console.log("O jogador está offline após desconectar.");
        }
        else {
            console.log("Falha: O jogador não pode desconectar caso não esteja em jogo ou pausado.");
        }
    }
}