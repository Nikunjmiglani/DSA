class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>visited;
        for(int i=0;i<nums.size();i++){
            int curr = nums[i];
            if(visited.find(curr)!=visited.end()){
                return true;
            }
            visited.insert(curr);
        }
        return false;

    }
};
