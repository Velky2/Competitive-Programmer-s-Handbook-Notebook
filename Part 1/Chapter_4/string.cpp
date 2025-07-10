#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a = "hatti";
    string b = a + a;
    cout << b << "\n";
    b[5] = 'v';
    cout << b << "\n";
    string c = b.substr(3, 4);
    cout << c << "\n";
}