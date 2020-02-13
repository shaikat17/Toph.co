//Problem Link: https://toph.co/p/find-the-good-sequence

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    int cnt[n]={0};
    
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] + 2 <= a[i + 1]) {
            if (cnt[i + 1] == 0) cnt[i] = 2;
            else cnt[i] = cnt[i + 1] + 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << cnt[i] << endl;
    }
    return 0;
}

