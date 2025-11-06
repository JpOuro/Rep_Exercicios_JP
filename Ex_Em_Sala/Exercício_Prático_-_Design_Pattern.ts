abstract class Pagina {
    abstract exibir(): void;
}

class PaginaHabilidades extends Pagina {
    exibir(): void {
        console.log("Página de Habilidades");
    }
}

class PaginaEducacao extends Pagina {
    exibir(): void {
        console.log("Página de Educação");
    }
}

class PaginaExperiencia extends Pagina {
    exibir(): void {
        console.log("Página de Experiência");
    }
}

class PaginaIntroducao extends Pagina {
    exibir(): void {
        console.log("Página de Introdução");
    }
}

class PaginaResultados extends Pagina {
    exibir(): void {
        console.log("Página de Resultados");
    }
}

class PaginaConclusao extends Pagina {
    exibir(): void {
        console.log("Página de Conclusão");
    }
}

class PaginaResumo extends Pagina {
    exibir(): void {
        console.log("Página de Resumo");
    }
}

class PaginaBibliografia extends Pagina {
    exibir(): void {
        console.log("Página de Bibliografia");
    }
}

abstract class Documento {
    protected paginas: Pagina[] = [];

    constructor() {
        this.criarPaginas();
    }

    protected abstract criarPaginas(): void;

    exibirPaginas(): void {
        for (const pagina of this.paginas) {
            pagina.exibir();
        }
    }
}

class Curriculo extends Documento {
    protected criarPaginas(): void {
        this.paginas.push(new PaginaHabilidades());
        this.paginas.push(new PaginaEducacao());
        this.paginas.push(new PaginaExperiencia());
    }
}

class Relatorio extends Documento {
    protected criarPaginas(): void {
        this.paginas.push(new PaginaIntroducao());
        this.paginas.push(new PaginaResultados());
        this.paginas.push(new PaginaConclusao());
        this.paginas.push(new PaginaResumo());
        this.paginas.push(new PaginaBibliografia());
    }
}

class Principal {
    static main(): void {
        const documentos: Documento[] = [
            new Curriculo(),
            new Relatorio()
        ];

        for (const doc of documentos) {
            if (doc instanceof Curriculo) {
                console.log("Curriculo -------");
            } else if (doc instanceof Relatorio) {
                console.log("Relatorio -------");
            }
            doc.exibirPaginas();
        }
    }
}

Principal.main();