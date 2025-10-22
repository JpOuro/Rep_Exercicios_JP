"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var Macaco = /** @class */ (function () {
    function Macaco(Nome, Bucho) {
        this.Nome = Nome;
        this.Bucho = Bucho;
    }
    Macaco.prototype.Comer = function () {
        var s = prompt("Insira o alimento do macaco.");
        this.Bucho = s;
    };
    Macaco.prototype.VerBucho = function () {
        console.log(this.Bucho);
    };
    Macaco.prototype.Digerir = function () {
        this.Bucho = "Vazio";
    };
    return Macaco;
}());
var Macaco1 = new Macaco("Bono", "Vazio");
var Macaco2 = new Macaco("Mano", "Vazio");
