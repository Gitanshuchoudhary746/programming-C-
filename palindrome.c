#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int c=0;
	printf("Enter a string ");
	fgets(str,50,stdin);
	int l=strlen(str);
	for(int i=0;i<l;i++){
		for(int j=l-1;j>=0;j--){
			if(str[i]==str[j]){
				c=1;}
			else{
				c=0;
				}
			}
		}
	if(c==1){
		printf("Palindrome");}
	else{
		printf("Not palindrome");}
	return 0;
	}
