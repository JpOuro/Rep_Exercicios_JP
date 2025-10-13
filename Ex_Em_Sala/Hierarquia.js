class Animal {
    constructor(nome) {
        this.nome = nome;
    }
}

class Gato extends Animal {
    constructor(nome) {
        super(nome);
    }
    come() {
        console.log(`${this.nome} está comendo ração.`);
    }
}

class Passaro extends Animal {
    constructor(nome) {
        super(nome);
    }
    come() {
        console.log(`${this.nome} está comendo alpiste.`);
    }
}
