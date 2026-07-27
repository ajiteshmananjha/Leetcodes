int maxProduct(int* nums, int numsSize) {
    int ans=0,i=0;
    for(;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++){
            if((nums[i]-1)*(nums[j]-1)>ans)
                ans=(nums[i]-1)*(nums[j]-1);
        }
    }
    return ans;
}