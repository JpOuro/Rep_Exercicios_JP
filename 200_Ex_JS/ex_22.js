let mes = prompt("Insira o m�s.");
if (mes == "Janeiro" || mes ==  "Mar�o" || mes == "Maio" || mes == "Julho" || mes == "Agosto" || mes == "Outubro" || mes == "Dezembro") {
	console.log(`O m�s de ${mes} tem 31 dias.`);
}
else if (mes == "Abril" || mes == "Junho" || mes == "Setembro" || mes == "Novembro") {
	console.log(`O m�s de ${mes} tem 30 dias.`);	
}
else {
	console.log(`O m�s de ${mes} tem 27 dias.`);
}