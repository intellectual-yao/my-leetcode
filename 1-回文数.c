bool isPalindrome(int x)
{
	    int i = 0, j, k;
	    int a[100];             //������ÿһλ��������
	    if(x < 0)               //����һ�����ǻ�����
	        return false;
	    else if(x == 0)         //0�ǻ�����
	        return true;
	    else
	    {
	        while(x != 0)
	        {
	            a[i] = x % 10;
	            x /= 10;
	            i++;
	        }
	        for(j = 0, k = i - 1;j < k;j++, k--)
	        {
	            if(a[j] != a[k])
	                return false;
	        }
	    }
        return true;
}
