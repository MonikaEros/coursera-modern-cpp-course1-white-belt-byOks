#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
using namespace std;

int Factorial(int x) {
    int i = 1;
    int f = 1;
    while (i <= x) {
        f *= i++;
    }
    return f;
    
}

int Factorial(int x) {
  if (x <= 1) {
    return 1;
  } else {
    return x * Factorial(x - 1); 
  }
}


int main() {

    cout << Factorial(4);
    // 24 

    return 0;
}

