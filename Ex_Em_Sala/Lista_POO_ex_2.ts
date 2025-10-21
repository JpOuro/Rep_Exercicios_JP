class Avaliacao {
    Id_Mat: number;
    Data_Mat: string;
    Nome: string;
    Avaliações: number[];

    constructor (Id_Mat: number, Data_Mat: string, Nome: string, Avaliações: number[]) {
        this.Id_Mat = Id_Mat;
        this.Data_Mat = Data_Mat;
        this.Nome = Nome;
        this.Avaliações = Avaliações;
    }

    Info_Aluno() {
        console.log(`ID: ${this.Id_Mat}`);
        console.log(`Data da Matrícula ${this.Data_Mat}`);
        console.log(`Nome do aluno: ${this.Nome}`);
    }
    Info_Ult_Av() {
        console.log(`Resultado da última avaliação: ${this.Avaliações[this.Avaliações.length - 1]}`)
    }
    Info_Av(a: number) {
        console.log(`Resultado da avaliação ${a}: ${this.Avaliações[a]}`);
    }
}