#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio;
	float area;
	float n = 3.14159;
	
	scanf("%f", &raio);
	area = n * (pow(raio, 2.0));
	
	printf("A = %f", area);
	
	
	return 0;
}
