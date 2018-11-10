//Findout, is number even or odd without using condition

#include<stdio.h>
int input=15;
void evenORodd();

int main(){
	evenORodd(input);
}

void evenORodd(int no){
//Findout number is even or odd?
		char result[2][5]={"Even","Odd"};
		printf("Given number %d is:%s",no,result[(no%2)]);
		
return;
}
