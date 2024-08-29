#include<stdio.h>
int main(){
	int n,i,pos,value;
	printf("enter the size of the array : ");
	scanf("%d", &n);
	int arr[n+1]; // increase the size of the array by 1 to accommodatew the new value
	printf("Enter %d elements : \n", n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the position where you want to insert the value : ");
	scanf("%d", &pos);
	if(pos<0|| pos>n){
		printf("Invalid position.");
		return 0;
	}
	printf("enter the value you want to insert : ");
	scanf("%d", &value);
	for(i=n; i>=pos; i--){
		arr[i+1]= arr[i];
	}
	arr[pos] = value;
	printf("Array after inserting the value: \n");
	for(i=0; i<n+1; i++){
	printf("%d", arr[i]);
}
	return 0;
}
