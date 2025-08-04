class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> tab;
        int majorityCondition = nums.size() / 2;      
        for(int num : nums){
            tab[num]++;
            if(tab[num] > majorityCondition) return num;
        }
        return -1;
    }
};
