int searchInsert(int* nums, int numsSize, int target)
{
    int i, j, count = 0;
    for(i = 0;i < numsSize - 1;i++)
    {
        if(nums[i] == target)       //Ѱ���Ƿ����Ŀ��Ԫ��
            return i;
    }
    for(j = 0;j < numsSize - 1;j++)
    {
        if(target > nums[j])        //Ѱ�Ҳ���λ��
            count++;
    }
        if(target > nums[numsSize - 1]) //���һλ�Ļ���Ҫ��λ�ü�һ
            count++;
    return count;   
}
