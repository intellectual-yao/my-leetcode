int maxSubArray(int* nums, int numsSize)
{
    int i, j, temp;
    int _Max = nums[0];         //���ȼ������ֵΪ�����һ��Ԫ��

    for (i = 0; i < numsSize; i++)
    {
        temp = 0;               //Ϊ�˱Ƚ����е����к����ÿ�ζ�Ҫ����ʱ��������
        for (j = i; j < numsSize; j++)      //����ÿ�����������к�
        {   
            temp += nums[j];
            if (temp > _Max)                //������кʹ������ֵ���͸������ֵ
            {
                _Max = temp;
            }
        }
    }
    return _Max;
}
