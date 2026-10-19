#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Finds the longest valid section using one forward sliding window.
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> frequency;

        int left = 0;
        int maxFruits = 0;

        // Expand the window by adding each fruit from the right.
        for (int right = 0; right < fruits.size(); right++) {
            frequency[fruits[right]]++;

            // Remove one left fruit when more than two types are present.
            if (frequency.size() > 2) {
                frequency[fruits[left]]--;

                // Remove a type after its final fruit leaves the window.
                if (frequency[fruits[left]] == 0) {
                    frequency.erase(fruits[left]);
                }

                left++;
            }

            // Only valid windows can contribute to the final answer.
            if (frequency.size() <= 2) {
                maxFruits = max(
                    maxFruits,
                    right - left + 1
                );
            }
        }

        return maxFruits;
    }
};

