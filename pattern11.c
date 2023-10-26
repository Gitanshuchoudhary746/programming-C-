#include <stdio.h>  
  
int main()  
{  
    int n,m=1,b=1;      
    for(int i=5;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++) 
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        { 
         if(k==1 || k==m || m==5){
         
            printf("* "); }
         else{
         	printf("  ");} 
        }  
        printf("\n");  
        m++;
        }  
              
    for(int i=5;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++) 
        {  
          printf(" ");  
        }  
        for(int k=1;k<=b;k++)  
        {
        	if(k==1 || k==b || b==5){
         
            printf("* "); }
         else{
         	printf("  ");}  
        }  
        printf("\n");  
        b++; 
        }
     for(int i=1;i<=4;i++)
     {
     	printf("   * *\n");
     	}
     printf("* * * * *\n");
     	  
    return 0;  
}  
