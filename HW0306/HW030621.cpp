#include<iostream>

using namespace std;


int main(){
	double EU;
	
	cout<<"Enter EU";
	cin>>EU;
		
	
	if(EU<=50){
		cout<<"total bill=EU*0.5";
	}else if(EU>=50 && EU<=150){
	
		cout<<"total bill=25+((EU-50)*0.75)";
	}else if(EU>=150 && EU<=250){
	
		cout<<"total bill=125+(EU-150)*1.2";
	}else if(EU>=250){
	
		cout<<"total bill=245+(EU-250)*1.5";
	} 
	
	
	return 0;
}
