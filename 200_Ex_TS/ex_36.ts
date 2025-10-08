let c: number = 0;
for (let i: number = 1; i <= 100; i++) {
    c = 0;
	for (let j: number = 1; j <= i / 2; j++) {
		let b: number = i / j;
		if (Number.isInteger(b)) {
			c = c + j;
		}
	}
	if (c == i) {
		console.log(`O número ${c} é perfeito.`);
	}
}
export{};