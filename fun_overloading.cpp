#include<iostream>
#include<string>
using namespace std;

void display(int a){ cout<<a<<endl; }
void display(double a){ cout<<a<<endl; }
void display(string a){ cout<<a<<endl; }
void display(string a,string b){ cout<<a<<b<<endl; }
 
int main(){

	display(5);
	display(5.778);
	display("kapil");
	display("kapil","bhayani");


return 0;
}

/****************************************
		OUTPUT:
*****************************************
5
5.778
kapil
kapilbhayani
*****************************************
Function can be defined with same name,

but,their data types should be different.
but,input arguments should be different.
but,return type should be different.

NOTE:::::at least one condition needded.
****************************************/
