#include <iostream>

using namespace std;

float inputOne(float);
float inputTwo(float);
void answe(float);
void recuInpt();

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
    firstNumber = inputOne(number);
    secondNumber = inputTwo(number);
    result = firstNumber + secondNumber;
    answe(result);
    break;

  case '-':
    firstNumber = inputOne(number);
    secondNumber = inputTwo(number);
    result = firstNumber - secondNumber;
    answe(result);
    break;

  case '/':

  case '*':

  case '1':
    number = inputOne(number);
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

void answe(float res) { cout << "The result is : " << res << endl; };

float inputOne(float num) {
  cout << "Enter a Number:" << endl;
  cin >> num;
  return num;
};

float inputTwo(float num){
  cout <<"Enter another number:" << endl;
  cin >> num;
  return num;
};

void recuInpt(){
  cout << "dbug" << endl;
  //firstNumber = inputOne(number);
  //secondNumber = inputTwo(number);
}
