#include <iostream>
#include <fstream>

using namespace std;

int main() {
  char str[300];
  cout << "Start..." << endl;
  ifstream cfFile("cdrpp.cf");
  if (cfFile.is_open()) {
    cfFile >> str;
  } else {
    return -1;
  }

  cout << str << endl;
}