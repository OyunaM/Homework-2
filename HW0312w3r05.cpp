#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<"Enter a num: ";
	cin>>num;
	
	for(int i = 1;i<=num;i++){
		
		cout<<i<<" * "<<i<<" * " <<i<<"= "<<(i*i*i)<<endl;
	}
	
	
	return 0;
}
