#include<iostream>
using namespace std;
int add(int a=5,int b=5,int c=5);

int add(int a,int b,int c){
	return a+b+c;
}
int main(){
	int a {1},b {1}, c {1};
	cout<<add(a,b,c)<<endl;
	cout<<add(a,b)<<endl;
	cout<<add(a)<<endl;
	


return 0;
}

/****************************************
		OUTPUT:
*****************************************
3
7
11
*****************************************
Function takes default arguments, defined
in prototype.
NOTE: C does not have default arguments.
****************************************/
