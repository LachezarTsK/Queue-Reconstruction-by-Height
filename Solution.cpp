
#include <vector>
using namespace std;

class Solution {

public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        const auto tallerWithLessPreceedingPeopleOnTop = [](const vector<int>& x, const vector<int>& y) {
            return (x[0] == y[0]) ? (x[1] < y[1]) : (y[0] < x[0]);
        };
        sort(people.begin(), people.end(), tallerWithLessPreceedingPeopleOnTop);

        vector<vector<int>> reconstructedQueue;
        for (const auto& person : people) {
            reconstructedQueue.insert(reconstructedQueue.begin() + person[1], person);
        }
        return reconstructedQueue;
    }
};
