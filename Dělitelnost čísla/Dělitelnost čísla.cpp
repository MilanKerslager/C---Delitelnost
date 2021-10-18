// Dělitelnost čísla
// Programzjistí, zda je číslo x dělítelné číslem a

#include <stdio.h>

int main()
{
	int x = 14;
	int delitel = 5;
	printf("Cislo %d ", x);
	// rozhodneme, jestli je cislo sude/liche
	if (x % delitel == 0) {
		printf("je");
	}
	else {
		printf("neni");
	}
	printf(" delitelne cislem %d.\n", delitel);
}