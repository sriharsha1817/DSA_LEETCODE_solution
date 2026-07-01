class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> a;
        for(int i=1;i<=n;i++){
            if(numset.find(i)==numset.end()){
                a.push_back(i);
            }
        }
        return a;
    }
};