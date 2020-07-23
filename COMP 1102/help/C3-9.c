/*6(C3-9.C).�޸ĳ����嵥 8.4 �Ĳ����ֳ���ʹ�ø����ܵĲ²���ԡ����磬���������
50��ѯ���û��ǲ´��ˡ���С�˻��ǲ¶��ˡ������С�ˣ���ô��һ�β²��ֵӦ�� 50 �� 100
��ֵ��Ҳ���� 75�������β´��ˣ���ô��һ�β²��ֵӦ�� 50 �� 75 ����ֵ���ȵȡ�ʹ��
���ֲ��ң�binary search�����ԣ�����û�û����ƭ������ô����ܿ�ͻ�µ���ȷ�Ĵ𰸡�*/

#include <stdio.h>

void binarySearch(){
	int guess=50, min=0, max=100;
	char response1,response2;
	
	printf("pick an integer from 1 to 100.I will try to guess it\n");
	printf("Respond with a y if my guess is right and with a n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);
	scanf("%c",&response1);
	
	while (1) 
	{
		while( response2 = 'y'){

		}
		if (response1 == 'n') 
		{
			printf("Respond with a b if my guess is bigger and with a s if it is smaller.\n");
			scanf("%c",&response2);
			while(response2 == 'b')
			{
				max = guess;
				guess= (min + max)/2;
				printf("Well, then, is it %d?\n", guess);
				scanf("%c",&response2);
			}

			while(response2 == 's')
			{
				min=guess;
				guess=(min+max)/2;
				printf("Well, then, is it %d?\n", guess);
				scanf("%c",&response2);
			}
		}
		
		else 
		printf("Sorry, I understand only y or n.\n"); 
		while (getchar() != '\n') 
		continue; 
    }
    printf("I knew I could do it!\n"); 
}

int main()
{
	binarySearch();
	return 0;
}
