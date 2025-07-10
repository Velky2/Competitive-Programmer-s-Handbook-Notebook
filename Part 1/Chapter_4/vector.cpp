#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {-1, 2, 4, -3, 5, 2, -5, 2};
    v.push_back(7);
    cout << v.back() << "\n";
    v.pop_back();
    cout << v.back() << "\n";
    for (auto x : v){
        cout << x << " ";
    }
    cout << "\n";
}