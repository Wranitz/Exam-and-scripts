#include <iostream>

using namespace std;

float doubleInpu(float, float);
float singleInpu(float);
void answe(float);

int main() {

  char operato;
  float number;
  float firstNumber;
  float secondNumber;
  float result;

  cout << "#################### CALCULATOR #####################" << '\n';
  cout << "Choose one of the option:";
  cout << "+ - / * square=1 squareroot=2 modulus=3" << '\n';
  cin >> operato;

  switch (operato) {
  case '+':
    doubleInpu(firstNumber, secondNumber);
    cout << firstNumber << endl;
    result = firstNumber + secondNumber;
    answe(result);
    break;

  case '-':

  case '/':

  case '*':

  case '1':
    number = singleInpu(number);
    answe(number * number);
    break;
  case '2':

  case '3':

  default:
    cout << "That wasnt a valid responce" << endl;
    break;
  }

  return 0;
}

float doubleInpu(float firstNumbe, float secondNumbe) {
  cout << "Enter First Number: " << endl;
  cin >> firstNumbe;
  cout << "Enter Second Number: " << endl;
  cin >> secondNumbe;
  return (firstNumbe, secondNumbe);
};

void answe(float res) { cout << "The result is : " << res << endl; }

float singleInpu(float num) {
  cout << "Enter a Number:" << endl;
  cin >> num;
  return num;
}
