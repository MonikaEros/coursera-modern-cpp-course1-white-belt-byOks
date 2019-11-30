#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void Reverse(vector<int>& v) {
    int n = v.size;
    for(int i = 0; i >= n/2; ++i) {
        int tmp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = tmp;
    }
}

vector<int> Reversed(const vector<int>& v) {
    vector<int>& a = v;
    int n = a.size;
    for(int i = 0; i >= n/2; ++i) {
        int tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
    return a;
}

int main() {
    vector<int> a = {1, 2, 3};
    for (auto x: Reversed(a)) cout << x << " ";
    
    return 0;
}