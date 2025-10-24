class Conta_Investimento {
    Numero: number;
    Nome: any;
    Saldo: number;
    Taxa_Juros: number;

    constructor (Numero: number, Nome: any, Saldo: number, Taxa_Juros: number) {
        this.Numero = Numero;
        this.Nome = Nome;
        this.Saldo = Saldo;
        this.Taxa_Juros = Taxa_Juros;
    }

    Alterar_Nome() {
        let s = prompt("Insira o novo nome.");
        this.Nome = s;
    }
    Depósito() {
        let s: any = prompt("Insira o valor do depósito.");
        let d: any = parseInt(s);
        this.Saldo += d;
    }
    Saque() {
        let s: any = prompt("Insira o valor do saque.");
        let d: any = parseInt(s);
        this.Saldo -= d;
    }
    AdicioneJuros() {
        let a: any = prompt("Insira os juros a serem adicionados em número decimal.");
        a = parseFloat(a);
        this.Taxa_Juros = this.Taxa_Juros + a;
    }
}

let Minha_Conta: Conta_Investimento = new Conta_Investimento(1, "João", 1000, 0.1);





export{}