#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> numbers = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    for (int a = 0; a < 8; a++){
        for (int b = a; b < 8; b++){
            int sum = 0;
            for (int c = a; c <= b; c++){
                sum += numbers[c];
            }
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}

// O(n^3)