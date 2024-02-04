#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    string ans = "";
    int maxlength = 0;
    vector<string> v;
    int p = 0;
    //¨ä¹êv.size()§Yn

    while (n--) {
        cin >> s;
        v.push_back(s);
        int l = s.size();
        maxlength = max(maxlength, l);
    }

    for (int i = 0; i < maxlength; i++) {
        for (int j = 0; j < v.size(); j++) {
            if (i<v[j].size()) {
                if (v[j][i] >= '0' && v[j][i] <= '9') {
                    p = 1;
                } else {
                    ans += v[j][i];
                }
            }
        }
    }

    cout << ans;

    return 0;
}
