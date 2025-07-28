int removeDuplicates(int* nums, int numsSize) {
    int slow=0;
    int temp=0,i;
    for ( i =0;i<numsSize-1;i++)
    {
        
        printf("%d\n",nums[i]);
        if (nums[i] != nums[i+1])
        {
            nums[slow++] = nums[i];
        }
    }
    nums[slow++] = nums[i];
    return slow;
}
