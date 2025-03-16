#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  string name = "John";
  int age = 30;
  vector<int> scores = {90, 80, 70};
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  for (auto score : scores) {
    cout << "Score: " << score << endl;
  }
}
