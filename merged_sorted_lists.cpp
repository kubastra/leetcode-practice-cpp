class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums2.empty()){
            return;
        }
       
        int insert_index = 0;

        for(int i = 0; i < n; i++){
            bool inserted = false;
            for(int j = insert_index; j < nums1.size(); j++){
                if(nums2[i] < nums1[j]){
                    nums1.insert(nums1.begin() + j, nums2[i]);
                    inserted = true;
                    nums1.pop_back();
                    insert_index = j + 1;
                    break;
                }
            }
            if(!inserted){
                nums1.insert(nums1.begin() + m + i, nums2[i]);
                nums1.pop_back();
                insert_index = m + 1 + i;
            } 
        }
    }
};
