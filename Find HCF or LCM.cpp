#include<stdio.h>
int main(){
	int n1,n2,hcf,lcm,i;
	printf("enter the 1st number: ");
	scanf("%d", &n1);
	printf("%enter the 2nd number : ");
	scanf("%d", &n2);
	for(i=1;i<=n1&&i<=n2; i++){
		if(n1%i==0&& n2%i==0){
			hcf =i;
		}
	}
	lcm= (n1*n2)/hcf;
	printf("Hcf of %d and %d is : %d\n", n1,n2,hcf);
	printf("lcm of %d and %d is : %d\n", n1,n2,lcm);
	return 0;
}
