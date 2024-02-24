class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int freq1[101];
        memset(freq1, 0, sizeof(freq1));
        for (int& x : nums1) {
            freq1[x]++;
        }
        int freq2[101];
        memset(freq2, 0, sizeof(freq2));
        for (int& x : nums2) {
            freq2[x]++;
        }
        int freq3[101];
        memset(freq3, 0, sizeof(freq3));
        for (int& x : nums3) {
            freq3[x]++;
        }
        vector<int> ans;
        for (int i = 1; i <= 100; i++) {
            bool ok = false;
            ok |= (freq1[i] > 0 && freq2[i] > 0 && freq3[i] > 0);
            ok |= (freq1[i] > 0 && freq2[i] > 0);
            ok |= (freq2[i] > 0 && freq3[i] > 0);
            ok |= (freq1[i] > 0 && freq3[i] > 0);
            if (ok) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
