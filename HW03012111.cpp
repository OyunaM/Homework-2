#include<iostream>

using namespace std;


int main(){
	float W1,N1,W2,N2;
	float A;

	cout<<"Enter W1: ";
	cin>>W1;
	cout<<"Enter N1: ";
	cin>>N1;
	cout<<"Enter W2: ";
	cin>>W2;
	cout<<"Enter N2: ";
	cin>>N2;
	
	A = ((W1*N1)+(W2*N2))/(N1+N2);
	
	
	cout<<"Average value: "<<A;

	
	
	
	return 0;
}
