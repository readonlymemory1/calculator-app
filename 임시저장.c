#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	int d;
	scanf_s("%d", &a);
	for (/*c = 1;c <= b;c++*/c = 1; c <= a; c++) {
		
		if (a % c == 0) {
			for (b = 0;b <= a;b++) {

				printf("*");
			}
			printf("\n");
		}
	}
			
		
	

}
