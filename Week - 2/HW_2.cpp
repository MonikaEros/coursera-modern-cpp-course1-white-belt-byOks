#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool IsPalindrom(string word) {
  int word_length = word.size();
  
  for(int i = 0; i < word.size() / 2; ++i) {
      int j = word_length - i - 1;
      if (word[i] != word[j]) {
        
        return false;
      }
    }
  
  return true;
}

int main() {

    cout << IsPalindrom("madam");
    // True

    return 0;
}

