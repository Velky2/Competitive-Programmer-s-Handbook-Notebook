#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {-1, 2, 4, -3, 5, 2, -5, 2};

    // Sort vector
    sort(v.begin(), v.end());
    for (int num : v){
        cout << num << " ";
    }
    cout << "\n";

    // Inverted sort vector

    sort(v.rbegin(), v.rend());
    for (int num : v){
        cout << num << " ";
    }
    cout << "\n";

    // Sort string

    string s = "monkey";
    sort(s.begin(), s.end());
    cout << s << "\n";

}
