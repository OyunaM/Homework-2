#include<iostream>

using namespace std;

int main(){
	int year;
	cout<<"Input year : ";
	cin>>year;
	
	
	if(year%4 !=0){;
		cout<<year<<" is a common year";
	}else if(year%100 !=0){
		cout<<year<<" is a leap year";
	}else if(year%400 !=0){
		cout<<year<<" is a common year";
	}else{
		cout<<year<<" is a leap year";
	}
	
	
	return 0;
}
