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
    string word;
    cin >> word;
    int count_upper_case = 0, count_lower_case = 0;
    for (auto character: word) {
        if ('A' <= character and character <= 'Z') count_upper_case++;
        else count_lower_case++;
    }
    if (count_lower_case >= count_upper_case) {
        for (auto character: word) {
            cout<<static_cast<char>(tolower(character));
        }
    }else {
        for (auto character: word) {
            cout<<static_cast<char>(toupper(character));
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
