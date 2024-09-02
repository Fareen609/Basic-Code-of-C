#include<stdio.h>
int main(){
	int num1;
	int num2;
	char op;
		printf("enter the operator(+,-,*,/): ");
	scanf("%c", &op);
			printf("Enter the num1: ");
	scanf("%d", &num1);
	printf("Enter the num2: ");
	scanf("%d", &num2);
	switch(op){
		case '+':
			printf("%d + %d = %d",num1, num2, num1+num2);
			break;
			case '-':
				printf("%d -%d = %d", num1, num2, num1-num2);
				break;
				case '*':
					printf("%d * %d = %d", num1, num2, num1*num2);
					break;
					case '/':
						if(num2!=0){
							printf("%d /%d = %d", num1, num2, num1/num2);
						}
						else{
							printf("Error! division by zero is not allowed. ");
						}
						break;
						default:
							printf("Error! Invalid operator.");
	}

	
	return 0;
}
