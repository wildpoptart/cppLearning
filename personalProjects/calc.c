#include <stdio.h>
#include <math.h>

int main(){
	char op;
	double n1, n2, sum;

	printf("Select Operator (+,-,*,/):");
	scanf("%c", &op);
	printf("Enter numbers: ");
	scanf("%lf %lf", &n1, &n2);

	switch(op){
		case '+': 
			sum = n1 + n2;
	       		printf("%.1lf + %.1lf\n= %.1lf\n", n1,n2,sum);
			break;
		case '-': 
			sum = n1 - n2;
			printf("%.1lf - %.1lf\n= %.1lf\n", n1,n2,sum);
			break;
		case '*':
			sum = n1 * n2;
			printf("%.1lf * %.1lf\n= %.1lf\n", n1,n2,sum);
			break;
		case '/':
			sum = n1 / n2;
			printf("%.1lf / %.1lf\n= %.1lf\n", n1,n2,sum);
			break;
		default: printf("Please pick operator");
	}
}
