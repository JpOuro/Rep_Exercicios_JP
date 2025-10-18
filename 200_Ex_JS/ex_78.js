const Cachorro = {
    Nome: "Bandit",
    Raça: "Vira-Lata",
    Idade: 4,
};

Cachorro.human = function() {
    console.log(`${Idade * 7}`);
}
Cachorro.human();