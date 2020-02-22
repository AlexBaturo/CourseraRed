#include <string>
#include <iostream>
#include <vector>
using namespace std;

#define S1(x) ID## x
#define S2(x) S1(x)
#define UNIQ_ID  S2(__LINE__)


int main() {
  int UNIQ_ID = 0;
  string UNIQ_ID = "hello";
  vector<string> UNIQ_ID = {"hello", "world"};
  vector<int> UNIQ_ID = {1, 2, 3, 4};


}
