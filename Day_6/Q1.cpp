#include <iostream>
using namespace std;

int main() {
  int n;
  long long binary = 0;
  int rem, place = 1;

  cout<< "enter a decimal number:";

  cin>>n;
  while(n>0)
  {
    rem = n%2;
    binary = binary + rem * place;
    place = place * 10;
    n = n/2;

  }
  cout<<"binary = " << binary;
  
    return 0;
}