char * longestCommonPrefix(char ** strs, int strsSize)
{
    if(strsSize == 0)       //��Ϊ���ַ���ֱ�ӷ��ؼ���
        return "";
    else
    {
        for(int j = 0;j < strlen(strs[0]);j++)      //�Ե�һ���ַ�����Ϊ��׼��ʼ����ɨ��
        {
            for(int i = 0;i < strsSize;i++)
            {
                if(strs[0][j] != strs[i][j])        //�������俴����
                {
                    strs[0][j] = '\0';          //�����ƥ�䣬�򽫵�һ�е��ַ����ĸ�λ���ַ���Ϊ��
                    break;
                }
            }
        }
    }
    return strs[0];         //��󷵻ص�һ���ַ���Ϊ��С����ǰ׺
}
