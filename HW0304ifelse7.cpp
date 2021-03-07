#include<iostream>

using namespace std;

int main(){
	char ch;
	char z='z';
	
		cout<<"Input ch : ";
	cin>>ch;
	
	
	if(ch>='a' && ch<=z){
		cout<<ch<<" is an lowercase alphabet";
	}else if(ch>='A' && ch<='Z'){
		cout<<ch<<" is an uppercase alphabet";

	}else{
		cout<<ch<<" is not an alphabet";
	}
	
	
	return 0;
}
