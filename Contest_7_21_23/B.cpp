#include<bits/stdc++.h>
using namespace std;

struct Response {
    int words;
    int quality;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Response> res(n);

        for (int i = 0; i < n; ++i) {
            cin >> res[i].words >> res[i].quality;
        }

        int maxQ = -1;
        int winner = -1;

        for (int i = 0; i < n; ++i) {
            if (res[i].words <= 10 && res[i].quality > maxQ) {
                maxQ = res[i].quality;
                winner = i;
            }
        }

        cout << winner + 1 << endl;
    }
    return 0;

}

