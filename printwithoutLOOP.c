//Print out series without using Loop

#include<stdio.h>
int oneTO=25;
void printwithoutLOOP();

int main(){
	printwithoutLOOP(oneTO);
return 0;
}



void printwithoutLOOP(int number){

	static int count=1;
		if(count<=number){
			printf("%d\n",count);
			count++;
			printwithoutLOOP(number);
				}
return;
}
