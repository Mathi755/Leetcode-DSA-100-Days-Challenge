int majorityElement(int* nums, int numsSize) {
    int count=0;
    int temp = 0;
    for (int i=0;i<numsSize;i++)
    {
        if (count == 0)
        {
            temp = nums[i];
        }
        if (nums[i] == temp)
        {
            count++;
        }
        else{
            count--;
        }
    }
    return temp;
}
