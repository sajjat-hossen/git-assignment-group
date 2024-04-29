#include <bits/stdc++.h>
using namespace std;

// include header file
#include "div.h"
#include "mul.h"
#include "sum.h"
#include "sub.h"

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  double number1, number2;
  char sign;
  cin >> number1 >> sign >> number2;
  int result = 0;
  if (sign == '+') {
    result = sum(number1, number2);
  } else if (sign == '-') {
    result = Subtraction(number1, number2);
  } else if (sign == '*') {
    result = multiply(number1, number2);
  } else if (sign == '/') {
    result = division(number1, number2);
  } else {
    cout << "Error occured" << '\n';
    return 0;
  }
  cout << result << '\n';
  return 0;
}