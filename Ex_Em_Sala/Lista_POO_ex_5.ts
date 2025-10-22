class Macaco {
    Nome: string;
    Bucho: string;

    constructor(Nome: string, Bucho: string) {
        this.Nome = Nome;
        this.Bucho = Bucho;
    }

    Comer(s: string) {
        this.Bucho = s;
    }

    VerBucho() {
        console.log(this.Bucho);
    }

    Digerir() {
        this.Bucho = "Vazio";
    }
}

let Macaco1: Macaco = new Macaco("Bono", "Vazio");
let Macaco2: Macaco = new Macaco("Mano", "Vazio");

Macaco1.Comer("Alga");
Macaco1.VerBucho();

export{}