#include <iostream>
using namespace std;

int main() {
  double n1, n2 ,n3;
  cout << "enter 3 numbers: ";
  cin >> n1 >> n2 >> n3;

if (n1=> n2 && n1=> n3) 
  cout << "largest number is; " << n1 << endl;
else if (n2 => n1 && n2 => n3)
  cout << "largest number is; " << n2 << endl;
else if (n3 => n1 && n3 => n3)
  cout "largest number is; " << n3 << endl;
  
  
  return 0;
}
