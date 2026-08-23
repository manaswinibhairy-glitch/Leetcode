class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int half = n / 2;

        int leftSum = 0, rightSum = 0;
        int leftQ = 0, rightQ = 0;

        // Calculate sums and count '?' in both halves
        for (int i = 0; i < half; i++) {
            if (num[i] == '?') leftQ++;
            else leftSum += (num[i] - '0');
        }
        for (int i = half; i < n; i++) {
            if (num[i] == '?') rightQ++;
            else rightSum += (num[i] - '0');
        }

        // Difference between sums
        int diff = leftSum - rightSum;
        // Difference in number of '?'
        int qDiff = leftQ - rightQ;

        // Bob wins only if the imbalance can be perfectly balanced:
        // Condition: 2*diff + 9*qDiff == 0 AND qDiff is even
        return ((diff * 2 + qDiff * 9) != 0);
    }
};
