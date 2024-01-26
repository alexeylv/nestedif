#include <iostream>

int main() {
  int a = 1, b = 2, c = 3, result;
  if(a > b) {
      if(a > c) { result = a; } 
      else      { result = c; }
  } else {
      if(b > c) { result = b; }
      else      { result = c; }
  }
  std::cout << result << std::endl;
}