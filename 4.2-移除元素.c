int removeElement(int* nums, int numsSize, int val)
{
    if(numsSize == 0)           //��Ϊ�գ�ֱ�ӷ���0
        return 0;
    for(int i = 0;i < numsSize - 1;i++)     
    {
        if(nums[i] == val)
        {
            for(int j = i;j < numsSize - 1;j++)
            {
                nums[j] = nums[j + 1];
            }
            i--;                //Ϊ�˷�ֹɾ�����ظ�Ԫ��ûɾ��������Ҫ��i����һλ
            numsSize--;         //�Ƴ�Ԫ��֮�����鳤��Ҫ��һ
        }
    }
    if(nums[numsSize - 1] == val)   //��������ΪҲ����Ҫɾ����Ԫ�أ�ֱ���������鳤�ȼ���
        numsSize--;
    return numsSize;
}
