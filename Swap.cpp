#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout << "\nEnter two numbers:";
  cin >> a >> b;
  cout <<"Before swapping a = "<< a << " and b = "<< b;
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout << "\nAfter swapping a = "<< a << " and b = "<< b\n;
  return 0;
}
