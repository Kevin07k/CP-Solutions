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
    int number = 0;
    cin >> number;
    string word = "";
    for (int i = 0; i < number; i++) {
        cin >> word;
        if (word.size() > 10) {
            cout<<word[0]<<word.size()-2<<word[word.size()-1]<<endl;
        }else {
            cout<<word<<endl;
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
