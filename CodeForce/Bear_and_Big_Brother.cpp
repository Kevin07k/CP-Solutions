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
    int stature_Limak = 0, stature_Bob = 0, past_age = 0;
    cin >> stature_Limak >> stature_Bob;
    while (stature_Limak <= stature_Bob) {
        past_age++;
        stature_Limak *= 3;
        stature_Bob *= 2;
    }
    cout<<past_age;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}