#include <iostream>
using namespace std;
bool isPrime(int num){
    bool n=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          n = false;
          break;
       }
    }
    return n;
}
int main(){
   int num;
   bool n;
   while(true)
   {
   	cout<<"Enter any number(should be positive integer): ";
   cin>>num;
   n = isPrime(num);
   cout<<n<<endl;
	} 

   return 0;
}

