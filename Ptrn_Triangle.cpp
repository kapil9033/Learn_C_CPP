#include<iostream>
//#include<limits.h>
//#include<vector>
#include<string>
using namespace std;


int main(){
	string user_in;

	cout<<"Please enter string: ";
	cin>>user_in;
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
