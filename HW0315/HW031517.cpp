#include <iostream>

using namespace std;

int main(){
	
    int num,rev=0;     
    cout<<"Input a num :";
    cin>>num;
 
    for(; num>1; num=num/10){
    	rev=rev*10;
    	rev=rev+num%10;
	}
  
 	cout<<"Reverse of num"<<" = "<<rev;
 	
 	if(num==rev){
	 	cout<<num<<"is palindrome";
		
	}else{
	}
		cout<<num<<" is not palindrome";	
		
    return 0;
}
