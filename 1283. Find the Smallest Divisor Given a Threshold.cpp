class Solution {
public:
    long long sumD(vector<int> &nums,int div){
        long long sum=0;
        long long n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+ceil((double)(nums[i])/(double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(sumD(nums,mid)<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};