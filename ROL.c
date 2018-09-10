#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void delay(int n);


int main()
{
	int sno, i;

	srand(time(NULL));

	for(i = 0; i < 30; i++)
	{
		system("clear");
		sno = rand() % 27 + 1;
		printf("正在抽奖...%d\n", sno);
		//sleep(1);
		delay(i * i);
	}

	printf("中奖学生的序号为：%d\n", sno);

	return 0;
}


void delay(int n)
{
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < 100000; j++);
}
