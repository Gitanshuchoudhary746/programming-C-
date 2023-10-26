#include<stdio.h>
int main(){
	int l,x;
	printf("Enter length of array= ");
	scanf("%d",&l);
	printf("Enter number = ");
	int arr[l];
	for(int i=0;i<l;i++){
		scanf("%d",&arr[i]);
		}
	printf("Before rotating \n");
	for(int i=0;i<l;i++){
		printf("%d",arr[i]);
		}
	printf("\n");
	printf("Enter how many numbers you want to shift= ");
	scanf("%d",&x);
	for(int k=0;k<x;k++){
	int temp=arr[0];
	for(int i=0;i<l;i++){
		arr[i]=arr[i+1];
		}
	arr[l-1]=temp;
		}
	printf("After rotating \n");
	for(int i=0;i<l;i++){
		printf("%d",arr[i]);
		}
	
	return 0;
	} 
