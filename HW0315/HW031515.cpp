#include <iostream>

 
using namespace std;
 
int main()
{
    int num, product=1; //urjver 0 baij bologhui uchir 1 gej uguv//
    cout<<"Enter any number:"; // hereglegchees too avna//
    cin>>num;
 
    
    while(num != 0) // loop ee 0 boltol ni shalgana//
    {
        product = product * (num % 10); // suuliin toog avaad product dotor hadgalaad,0 boltol ni urjuuleed yvsaar baigaad product of digits iig olno//
 
        num = num / 10;
    }
 
    cout<<"Product of digits: "<<product;
 
    return 0;
}

