class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool flag = false;
        for(int i = 0; i < nums.size(); i++){
            if(flag) i--;
            if(i + 1 < nums.size() && nums[i] == nums[i + 1]){
                nums.erase(nums.begin() + i + 1);
                flag = true;
            }else{
                flag = false;
            }
        }
        return nums.size();
    }
};
