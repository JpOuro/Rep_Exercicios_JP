let mes: string = prompt("Insira o mês.");
if (mes == "Janeiro" || mes ==  "Março" || mes == "Maio" || mes == "Julho" || mes == "Agosto" || mes == "Outubro" || mes == "Dezembro") {
	console.log(`O mês de ${mes} tem 31 dias.`);
}
else if (mes == "Abril" || mes == "Junho" || mes == "Setembro" || mes == "Novembro") {
	console.log(`O mês de ${mes} tem 30 dias.`);	
}
else {
	console.log(`O mês de ${mes} tem 27 dias.`);
}
export{}