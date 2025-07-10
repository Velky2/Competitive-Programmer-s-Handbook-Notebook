#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int> s;
    s.insert(2);
    s.insert(7);
    s.insert(2);
    s.insert(5);
    cout << s.count(2) << "\n";
    s.erase(2);
    cout << s.count(2) << "\n";
    cout << s.size() << "\n";
    for (auto x : s){
        cout << x << " ";
    }
    cout << "\n";

    // multiset pode ter repetição
    multiset<int> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    cout << ms.count(2) << "\n";
    ms.erase(ms.find(2)); // Para remover somente uma repetição
    cout << ms.count(2) << "\n";
}