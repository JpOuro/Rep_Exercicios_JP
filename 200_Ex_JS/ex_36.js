let c = 0;
for (let i = 1; i <= 100; i++) {
    c = 0;
	for (let j = 1; j <= i / 2; j++) {
		let b = i / j;
		if (Number.isInteger(b)) {
			c = c + j;
		}
	}
	if (c == i) {
		console.log(`O número ${c} é perfeito.`);
	}
}