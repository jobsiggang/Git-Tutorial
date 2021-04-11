#include <stdio.h>
 
int main(void){
int i,j,k; 
int money,bread=500,coke=800,candy=700;
int cnt=0;
printf("얼마있니?");
scanf("%d",&money);
printf("%d원있네!\n",money); 
for(i=bread;i<money;i+=bread)
	for(j=coke;j<money;j+=coke)
		for(k=candy;k<money;k+=candy)
		{
		 	
			if((i+j+k)==money) 
			{
			 	printf("bread: %d개, coke: %d개, candy: %d개\n",i/bread,j/coke,k/candy);
				cnt++;
			}
		}
printf("방법은 %d가지\n", cnt);     
return 0;
 
}
