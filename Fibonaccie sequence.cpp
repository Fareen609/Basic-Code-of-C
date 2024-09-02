#include<stdio.h>
int main(){
	int n =10;
	int first =0;
	int second =1;
	int next;
	printf("first %d numbers of febonacci sequence are: \n", n);
	for(int i =1; i<n; i++){
		if(i<=1)
		next =i;
		else{
			next = first+second;
			first = second;
			second = next;
		}
		printf("%d\n",next);
	}
	return 0;
}
