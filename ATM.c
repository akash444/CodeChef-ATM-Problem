#include<stdio.h>
 
int main(){
 
	int w;
	float b;
	scanf("%i %f",&w,&b);
		
		if(w%5==0&&b>w+0.50){
	
			b=b-w-0.50;
			printf("%f",b);
			}
		else{
			
			printf("%f",b);
			}
	return 0;
	} 