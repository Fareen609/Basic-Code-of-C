#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements :\n", n);
	for(i =0;i<n; i++){
		scanf("%d", &arr[i]);
	}
	int largest = arr[0];
	int smallest = arr[0];
	for (i=1; i<n; i++){
		if(arr[i]> largest){
			largest = arr[i];
		}
		if(arr[i]<smallest){
			smallest = arr[i];
		}
}
	printf("The largest number in the array is: %d\n", largest);
    printf("The smallest numver in the array is : %d\n", smallest);
	return 0;
}
