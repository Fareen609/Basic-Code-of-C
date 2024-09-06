#include<stdio.h>
int main(){
	int arr[5];
	int sum=0, max, min;
	float average;
	printf("enter 5 integers:\n ");
	for(int i =0; i<5;i++){
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for(int i =0; i<5; i++){
		sum = sum + arr[i];
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}
	average = (float)sum/5;
	printf("Sum: %d\n", sum);
	printf("Average: %f\n", average);
	printf("Maximum: %d\n", max);
	printf("Minimum : %d\n", min);
	return 0;
}
