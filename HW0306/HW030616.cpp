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
	
	if(a==b && b==c && c==a){
		cout<<"triangle is equilateral";
	}else if(a==b || b==c || a==c){
		cout<<"triangle is Isosceles Triangle";
	}else{
		cout<<"trianlge is Scalene";
	}

		
	
	
	return 0;
}
