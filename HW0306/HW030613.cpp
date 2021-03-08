#include<iostream>

using namespace std;


int main(){
	double amount;

	
	cout<<"Enter amount";
	cin>>amount;
		
	
	if(amount>=500){
		cout<<"note500=amount/500";
	}else if(amount>=100 && amount<=500){
	
		cout<<"note100=amount/100";
	}else if(amount>=50 && amount<=100){
	
		cout<<"note50=amount/50";
	}else if(amount>=20 && amount<=50){
	
		cout<<"note20=amount/20";
		
	}else if(amount>=10 && amount<=20){
	
		cout<<"note10=amount/10";
	
	}else if(amount>=5 && amount<=10){
	
		cout<<"note5=amount/5";
		
	}else if(amount>=1 && amount<=5){
	
		cout<<"note1=amount/1";
}
	return 0;
}

