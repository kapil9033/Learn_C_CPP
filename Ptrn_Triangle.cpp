#include<iostream>
//#include<limits.h>
//#include<vector>
#include<string>
using namespace std;

void print_pattern(string user_in){

	int inSize=user_in.size();

	for(int rw=0;rw<user_in.size();rw++){
	 for(int i=user_in.size()-rw;i>1;i--){
           cout<<" ";
	  }
	 for(int inc=0;inc<=rw;inc++){
            cout<<user_in[inc];
	 }
	 if(rw>0){
		 for(int dec=rw-1;dec>=0;dec--){
	  	    cout<<user_in[dec];
		 }
	 }
	  cout<<endl;
	}
	cout<<endl<<endl;
}

int main(int argc, char *arg[]){
//arg[0] would be obj filename we compiled and run. 
	

	//cout<<"Please enter string: ";
	//cin>>user_in;

	for(int i=1;i<argc;i++){
		string user_in= arg[i];
		print_pattern(user_in);
	}

return 0;
}


/********************************************
**********************************************
OUTPUT::::::::::::::
Please enter string123456
     1
    121
   12321
  1234321
 123454321
12345654321
**********************************************
**********************************************
*/
