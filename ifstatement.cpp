#include <iostream>

using namespace std;

int main() {

  int age;

  cout << "Enter your age: ";
  cin >> age;

  if (age >= 18 && age <= 50) {
    cout << "you are an adult." << '\n';
  } else if (age > 50) {
    cout << "you are a bit old for this." << '\n';
  } else {
    cout << "You are not old enough" << '\n';
  }

  return 0;
}
