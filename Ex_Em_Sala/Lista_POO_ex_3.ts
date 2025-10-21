class Conta_Corrente {
    Numero: number;
    Nome: any;
    Saldo: number;

    constructor (Numero: number, Nome: any, Saldo: number) {
        this.Numero = Numero;
        this.Nome = Nome;
        this.Saldo = Saldo;
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

}