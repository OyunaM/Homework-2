#include<iostream>

using namespace std;


int main(){
	int a;
	int b;
	int c;
	string triangle;
	

	cout<<"Enter a";
	cin>>a;
	cout<<"Enter b";
	cin>>b;
	cout<<"Enter c";
	cin>>c;
	
	if(a+b>=c && a+c>=b && c+b>=a){
		cout<<triangle<<"triangle is valid";
	}else{
		cout<<triangle<<"triangle is not valid";
	}
	
	
	return 0;
}
