/*          �˴����߼�û���⣬�������أ�e���⣨xin���Ĳ���������ʱ������г�ʱ
            ���ڸĽ��汾�Ƚ����ߵ����鳤�ȼ�������������ó��Ȳ�������
int strStr(char * haystack, char * needle)
{
    int i, j;
    int flag = 0;
    if(strlen(needle) == 0 && strlen(haystack) == 0)
        return 0;
    for(i = 0;i < strlen(haystack);i++)
    {
        flag = 0;
        for(j = 0;j < strlen(needle);j++)
        {
            if(haystack[i + j] != needle[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            return i;
    }
    return -1;   
}*/
int strStr(char * haystack, char * needle)
{
    int i, j;
    int flag = 0;
    int hlen = strlen(haystack);
    int nlen = strlen(needle);         
    if(nlen == 0 && hlen == 0)      //����������Ⱦ�Ϊ0�ͷ���0�����򷵻�-1
        return 0;
    for(i = 0;i < hlen;i++)
    {
        flag = 0;
        for(j = 0;j < nlen;j++)
        {
            if(haystack[i + j] != needle[j])        //��ƥ����ֲ�һ��ʱ���ڱ���1��ֱ�ӿ�ʼ��һ��ƥ��
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)               //��ƥ�������Ժ��ڱ�û�仯����˴�ʱ�� i ��������Ľ�
            return i;
    }
    return -1;   
}
