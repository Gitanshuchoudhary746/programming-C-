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
	printf("Before rotating \n");
	for(int i=0;i<l;i++){
		printf("%d",arr[i]);
		}
	printf("\n");
	int temp=arr[l-1];
	for(int i=l-1;i>0;i--){
		arr[i]=arr[i-1];
		}
	arr[0]=temp;
	printf("After rotating \n");
	for(int i=0;i<l;i++){
		printf("%d",arr[i]);
		}
	
	return 0;
	} 
