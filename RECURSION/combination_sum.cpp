#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void combination_sum(vector<int>& v, vector<vector<int>>& ans,
                         vector<int>& temp, int target, int index) {
        if (index == v.size()) {
            if (target == 0) ans.push_back(temp);
            return;
        }

        if (v[index] <= target) {
            temp.push_back(v[index]);
            combination_sum(v, ans, temp, target - v[index], index);
            temp.pop_back();
        }

        combination_sum(v, ans, temp, target, index + 1);
    }
};

int main() {
    Solution obj;
    vector<int> v = {2, 3, 6, 7};
    vector<vector<int>> ans;
    vector<int> temp;
    int target = 7;

    obj.combination_sum(v, ans, temp, target, 0);

    for (auto& it : ans) {
        for (int x : it) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
