class Televisor {
    Canal: number;
    Volume: number;

    constructor (Canal: number, Volume: number) {
        this.Canal = Canal;
        this.Volume = Volume;
    }

    Mudar_Canal(a: number) {
        if (a > 100 || a < 1) {
            console.log("Insira um valor válido para o canal.");
        }
        this.Canal = a;
    }

    Mudar_Volume(a: number) {
        if (a > 100 || a < 1) {
            console.log("Insira um valor válido para o volume.");
        }
        this.Volume = a;
    }
}



export{}