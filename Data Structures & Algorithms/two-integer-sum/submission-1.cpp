class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>arr;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        while(i<j) {
            int num = arr[i].first + arr[j].first;
            if(num > target) {
                j--;
            } else if(num < target) {
                i++;
            } else {
                int minInd = min(arr[i].second,arr[j].second);
                int maxInd = max(arr[i].second,arr[j].second);

                return {minInd, maxInd};
            }
        }
        return {};
    }
};
