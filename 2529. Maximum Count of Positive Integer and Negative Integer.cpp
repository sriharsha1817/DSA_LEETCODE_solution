class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
            }
            else if(nums[i]>0){
                a++;
            }
            else{
                b++;
            }
        }
        return max(a,b);
    }
};