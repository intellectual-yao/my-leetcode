int removeDuplicates(int* nums, int numsSize)
{
    for(int i = 0;i < numsSize - 1;i++)
    {
        if(nums[i] == nums[i + 1])      //���ǰ��������ͬ����ɾ��֮
        {
            for(int j = i;j < numsSize - 1;j++)
            {
                nums[j] = nums[j + 1];          //����Ԫ��ǰ��
            }
        i--;                //i�������Ҫ��ǰһλ����������ظ�Ԫ��δɾ�������
        numsSize--;         //���鳤�ȼ�һ
        }
    }
    return numsSize;
}
