class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int m=nums.size();
        int s=m/3;
        unordered_map<int,int>m1;
        vector<int>v;
        for (int num:nums){
            m1[num]++;
        }
        for (auto it:m1) {
            if (it.second>s) {
                v.push_back(it.first);
            }
        }
        return v;
    }
};
