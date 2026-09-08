#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<pair<int, int>> mrgPosi(vector<pair<int, int>> arr, int distance) {
        if (arr.empty())
            return {};
        vector<pair<int, int>> res;
        for (auto &robot : arr) {
            if (res.empty()) {
                res.push_back(robot);
                continue;
            }
            int lastPos = res.back().first;
            if (robot.first - lastPos <= distance) {
                res.back() = robot;
            } else {
                res.push_back(robot);
            }
        }
        return res;
    }
    vector<pair<int, int>> mrgSpeed(vector<pair<int, int>> arr) {
        if (arr.empty())
            return {};
        vector<pair<int, int>> res;
        for (auto &robot : arr) {
            if (res.empty()) {
                res.push_back(robot);
                continue;
            }
            if (res.back().second >= robot.second) {
                res.back() = robot;
            } else {
                res.push_back(robot);
            }
        }
        return res;
    }
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n = position.size();
        if (n == 0)
            return 0;
        vector<pair<int, int>> robots;
        for (int i = 0; i < n; i++) {
            robots.push_back({position[i], speed[i]});
        }
        robots = mrgPosi(robots, distance);
        robots = mrgSpeed(robots);
        return robots.size();
    }
};



int main(){
	return 0;
}