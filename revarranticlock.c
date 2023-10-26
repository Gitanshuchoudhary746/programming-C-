#include<stdio.h>
int main(){
	int l;
	printf("Enter length of array= ");
	scanf("%d",&l);
	printf("Enter number = ");
	int arr[l];
	for(int i=0;i<l;i++){
		scanf("%d",&arr[i]);
		}
	printf("Before reversing \n");
	for(int i=0;i<l;i++){
		printf("%d",arr[i]);
		}
	printf("\n");
	for(int i=0;i<l/2;i++){
		int temp=arr[i];
		arr[i]=arr[(l-i)-1];
		arr[(l-i)-1]=temp;
		}
	printf("After reversing \n");
	for(int i=0;i<l;i++){
		printf("%d",arr[i]);
		}
	
	return 0;
	} 
