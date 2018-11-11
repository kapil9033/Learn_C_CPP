//Create my own sizeof keywords
#include<stdio.h>

#define mySizeOf(type) (char *)(&type+1)-(char*)(&type)

int main(){

	char x;
	int y;
	double z;
	float a=9.34422;
	printf("Size of char Variable %ld\n",mySizeOf(x));
	printf("Size of int Variable %ld\n",mySizeOf(y));
	printf("Size of double Variable %ld\n",mySizeOf(z));
	printf("Size of float Variable %ld\n",mySizeOf(a));

return 0;
}
