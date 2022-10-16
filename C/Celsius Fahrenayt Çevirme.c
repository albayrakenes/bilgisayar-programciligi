#include<stdio.h>

int main(void)

{
	int celsius;
	float fahr;
	int lower, upper, step;
	
	lower = 0;
	upper = 16;
	step = 1;
	
celsius = lower;
while (celsius <= upper){
	fahr = celsius*1.8+32;
	printf("%d\t%.1f\n", celsius, fahr);
	celsius = celsius + step;
}

	
	
}
