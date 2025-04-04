#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;

constexpr int INF = 1e9;
constexpr long long int LLINF = 4e18;
constexpr double EPS = 1e-9; // very small number

bool is_vowels(char character) {
    switch (character) {
        case 'a':
            return true;
        case 'e':
            return true;
        case 'i':
            return true;
        case 'o':
            return true;
        case 'u':
            return true;
        case 'y':
            return true;
        default:
            return false;
    }
}

void solve() {
    string word = "";
    cin >> word;
    for (auto character: word) {
        character = static_cast<char>(tolower(character));
        if (! is_vowels(character)) {
            cout<<"."<<character;
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
