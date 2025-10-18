const Car = {
    Marca: "BYD",
    Modelo: "Seda",
    Ano: 2008,
    Velocidade: 50,
    Acelerar : function() {
        Car.Velocidade = Car.Velocidade + 5;
    },
    Frear: function() {
        Car.Velocidade = Car.Velocidade - 5;
    },
    Velocimetro: function() {
        console.log(Car.Velocidade);
    }
}