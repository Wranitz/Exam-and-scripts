#include <iostream>

using namespace std;

int main() {
  // type conversion = conversion a value of one datype to another
  //                   implicit = automatic
  //                    explicit = precede value with new data type(int)

  // double x = (int)3.14;
  // char x = 100;
  // cout << (char)100 << '\n';

  int correct = 8;
  int questions = 10;
  double score = (double)correct / (double)questions * 100;

  cout << score << "%" << '\n';
}
