class BombaCombustivel {
    Tipo_Combustivel: string;
    Preco_L: number;
    Quantidade_Combustivel_L: number = 100;

    constructor (Tipo_Combustivel: string, Preco_L: number, Quantidade_Combustivel_L: number) {
        this.Tipo_Combustivel = Tipo_Combustivel;
        this.Preco_L = Preco_L;
        this.Quantidade_Combustivel_L = Quantidade_Combustivel_L;
    }

    Abastecer_L(a: number) {
        this.Quantidade_Combustivel_L = this.Quantidade_Combustivel_L - a;
    }

    Abastecer_Valor(a: number) {
        this.Quantidade_Combustivel_L = this.Quantidade_Combustivel_L - (a / this.Preco_L);
    }

    Alterar_Preco_L(a: number) {
        this.Preco_L = a;
    }

    Alterar_Quantidade(a: number) {
        this.Quantidade_Combustivel_L = a;
    }
}