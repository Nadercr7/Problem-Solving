#include <bits/stdc++.h>
using namespace std;
#define nader ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ld long double
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define all(x) (x).begin(),(x).end()
#define fr(i,x,n) for(int i = x ; i< n ;i++)
#define cin(v) for(auto& ele : v)cin>>ele
#define print(v) for(auto& ele : v)cout << ele << ' '
#define vic2Dint vector<vector<int>>
#define vic2Dll vector<vector<long long>>
#define cin2D(v) for(auto& row : (v))for(auto& col : row)cin>>col
#define print2D(v) for(auto& row : v){for(auto& col: row)cout << col << ' ';cout << el;}
#define int ll
#define el '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    cin(a);
    unordered_map<int, int> freq_map;
    long long count = 0;
    for (int i = 0; i < n; i++) {
        int value = a[i] - (i + 1);
        count += freq_map[value];
        freq_map[value]++;
    }
    cout << count << el;
    }
signed main() {
    nader
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
