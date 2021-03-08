#include<iostream>

using namespace std;

int main(){
	int month;
		
	cout<<"Input month : ";
	cin>>month;
	
	if(month==2){
	cout<<month<<"has 28 days expect leap year";
	}else if(month==4 || month==6 ||month==9 || month==11){
		cout<<month<<" has 30 days";
	
	}else{
		cout<<month<<" has 31 days";
	}
	
	
	return 0;
}
