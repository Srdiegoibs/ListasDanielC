// 7) Modifique o programa anterior para imprimir os números em ordem crescente.
#include <stdio.h>

int main() {
    int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c); 
       
	if ((a <= b && a <= c) && b <= c ) {
		printf("%d %d %d", a, b, c);
	}
	if ((a <= b && a <= c) && c <= b ) {
		printf("%d %d %d", a, c, b);
	}
	else if ((c <= b && c <= a) && (a <= b)){
		printf("%d %d %d", c, a, b);
	}
	else if ((c <= b && c <= a) && (b <= a)){
		printf("%d %d %d", c, b, a);
	}
	else if ((b <= a && b <= c) && c <= a) {
		printf("%d %d %d", b, c, a);
	}
	else if ((b <= a && b <= c) && a <= c) {
		printf("%d %d %d", b, a, c);
	}
	return 0;	
}