#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Burger";
  string *ptr = &food;

  cout << food << "\n";

  cout << &food << "\n";

  cout << ptr << "\n";
  return 0;
}
