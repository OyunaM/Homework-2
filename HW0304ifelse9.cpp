#include<iostream>

using namespace std;

int main(){
	char ch;
	char A,a,Z,z;
	
	
	cout<<"Input ch : ";
	cin>>ch;
	
	
	if(z>=ch>=a){
		cout<<ch<<" is an alphabet";
	}else if(Z>=ch>=A){
		cout<<ch<<" is an alphabet";
	}else if(9>=ch>=0){
		cout<<ch<<" is digit";
	
	}else{
		cout<<ch<<" is special character";
	}
	
	
	return 0;
}
