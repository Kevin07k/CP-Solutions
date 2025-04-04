#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

void solve() {
    long long number = 0, subtraction = 0;
    cin >> number >> subtraction;
    for (int i = 0; i < subtraction; ++i) {
        if (number % 10 == 0) number /= 10;
        else number --;
    }
    cout<<number;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
