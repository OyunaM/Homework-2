#include<iostream>

using namespace std;


int main(){
	double CP;
	double SP;
	double Profit;

	
	cout<<"Enter CP";
	cin>>CP;
	cout<<"Enter SP";
	cin>>SP;
	
	
	if(Profit==CP-SP){
		cout<<Profit<<"Profit";
	}else if(SP>=CP){
	
		cout<<"it is a Profit";
	}else if(SP<=CP){
	
		cout<<"it is a loss";	
	}else
		cout<<"no profit, no loss";
	
	
	return 0;
}
