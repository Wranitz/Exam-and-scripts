#include <iostream>

using namespace std;

int main() {

  char grade;

  cout << "What letter grade?:";
  cin >> grade;

  switch (grade) {
  case 'A':
    cout << " You did great" << '\n';
    break;
  case 'B':
    cout << "You did good" << '\n';
    break;
  case 'c':
    cout << "You did okey";
    break;
  case 'D':
    cout << "You did not do good";
    break;
  case 'F':
    cout << "You failed!";
    break;
  default:
    cout << "Please only enter in a letter grade(A-F)";
  }

  return 0;
}
