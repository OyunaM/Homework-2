#include<iostream>

using namespace std;

int main(){
	char ch;
		
	cout<<"Input ch : ";
	cin>>ch;
	
	
	if(ch>='a' && ch<='z'){
		cout<<ch<<" is a lowercase alphabet";
	}else if(ch>='A' && ch<='Z'){
		cout<<ch<<" is an uppercase alphabet";
	}else if(ch>=48 && ch<=57){
		cout<<ch<<" is digit";
	
	}else{
		cout<<ch<<" is special character";
	}
	
	
	return 0;
}
