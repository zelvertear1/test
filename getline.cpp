#include <iostream>
#include <string>
using namespace std;
int main() {
  char hello[6];
  char *pLocation0 = &hello[0];
  char *pLocation1 = &hello[1];
  char *pLocation2 = &hello[2];
  cout << "(number)pLocation5 = " << pLocation0 << endl;
  cout << "(number)pLocation6 = " << pLocation1 << endl;
  cout << "(number)pLocation7 = " << pLocation2 << endl;
}
