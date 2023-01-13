#include <bits/stdc++.h>
using namespace std;

#define ll                long long
#define pb                push_back

const ll SZ = 1e3+5;

string s;
ll i, j, k, x, y, t; ///random variables
ll n, m, files_cnt[SZ];
vector <ll> dir[SZ];
vector <string> dir_files[SZ];
vector <ll> shared[SZ][SZ];

int main() {
    cout << "Enter number of directories: ";
    cin >> n;

    cout << "Enter number of directory relations: ";
    cin >> m;

    for(i = 1; i <= m; i++) {
        cin >> x >> y;
        dir[x].pb(y);
    }

    cout << "Enter number of files in each directories:\n";

    for(i = 1; i <= n; i++) {
        cout << "For directory " << i << ":\n";
        cin >> files_cnt[i];

        for(j = 0; j < files_cnt[i]; j++) {
            cin >> s;
            dir_files[i].pb(s);

            cout << "Enter number of other directories this file is shared with: ";
            cin >> t;

            for(k = 1; k <= t; k++) {
                cin >> x;
                shared[i][j].pb(x);
            }
        }
    }


    cout << "Enter the index number of directory: ";
    cin >> x;

    cout << "Files in this directory:\n";
    for(auto v: dir_files[x]) cout << v << " ";
    cout << "\n";

    cout << "Subdirectories of this directory:\n";
    for(auto v: dir[x]) cout << v << " ";
    cout << "\n";

    cout << "Enter any index number of the file in this directory:\n";
    cin >> y;

    cout << dir_files[x][y] << " is shared with directories: ";

    if(shared[x][y].empty()) {
        cout << "none.\n";
        return 0;
    }

    for(auto v: shared[x][y]) cout << v << " ";
    cout << "\n";


    return 0;
}
