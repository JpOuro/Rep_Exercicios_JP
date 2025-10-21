class Maromba {
    Nome: string;
    Data_de_Nascimento: string;
    Peso: number;
    Altura: number;

    constructor(Nome: string, Data_de_Nascimento: string, Peso: number, Altura: number) {
        this.Nome = Nome;
        this.Data_de_Nascimento = Data_de_Nascimento;
        this.Peso = Peso;
        this.Altura = Altura;
    }
    CalcularIMC(): number {
        return (this.Peso/(this.Altura*this.Altura))
    }
}