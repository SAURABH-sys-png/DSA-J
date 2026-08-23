class Solution {
public:
    vector<vector<int>> cut(int tg, vector<vector<int>>& res) {
        vector<vector<int>> temp;

        for (auto row : res) {
            if (tg > row[0] && tg < row[1]) {
                if (row[0] <= tg - 1)
                    temp.push_back({row[0], tg - 1});
                if (tg + 1 <= row[1])
                    temp.push_back({tg + 1, row[1]});
            }
            else if (tg == row[0]) {
                if (tg + 1 <= row[1])
                    temp.push_back({tg + 1, row[1]});
            }
            else if (tg == row[1]) {
                if (row[0] <= tg - 1)
                    temp.push_back({row[0], tg - 1});
            }
            else {
                temp.push_back(row);
            }
        }

        return temp;
    }

    vector<vector<int>> findDisappearedNumbers(
        vector<int>& nums, int lower, int upper
    ) {
        vector<vector<int>> res = {{lower, upper}};

        for (int x : nums) {
            if (x >= lower && x <= upper) {
                res = cut(x, res);
            }
        }

        return res;
    }
};

