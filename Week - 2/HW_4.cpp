#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (auto x: source) {
        destination.push_back(x);
    }
    source.clear();
}

int main() {
    vector<string> a = {"a", "b", "c"};
    vector<string> b = {"z"};
    
    MoveStrings(a,b);
    for (auto x: b) cout << x << " ";
    
    return 0;
}