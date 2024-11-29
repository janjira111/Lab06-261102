#include<iostream>
using namespace std;

int main(){
  int n=1;
  int a = 0, b = 0;
      
    while(n!=0){
      cout << "Enter an integer: ";
      cin >> n;
      if(n %2==0 && n != 0 ){
        a++;
      }
      if(n %2 == 1 && n!= 0 ) {
        b++;
      }
    }

    cout << "#Even numbers = " << a << "\n";
    cout << "#Odd numbers = " << b;
    return 0;
}