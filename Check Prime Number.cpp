#include<stdio.h>
	int isprime(int num){
		if(num<=1){
			return 0;
		}
		for(int i=2;i*i<=num; i++){
			if(num%i==0){
				return 0;
			}
		}
		return 1;
	}
	int main(){
		int start, end;
		printf("enter the starting range : ");
		scanf("%d", &start);
		printf("enter the ending range : ");
		scanf("%d",&end);
		printf("prime numbers between  %d and %d are : \n", start,end);
		for(int i=start; i<=end;i++){
			if (isPrime(int i)){
				printf("%d\n", i);
			}
		}
	return 0;
}
