#include<stdio.h>                        
#include<stdlib.h>
int main(void){
	for(int i=1;i<10;i++)                  
		for(int j=1;j<10;j++){            
			printf("%2d*%1d=%2d",j,i,j*i);
			printf("   ");
			if(j==9){                     
				printf("\n");
			}
		}
}
