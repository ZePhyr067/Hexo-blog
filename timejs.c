#include <stdio.h>
int main()
{
	int t1,m1,t2,m2;
	printf("输入时间1：");
	scanf("%d %d",&t1,&m1);
	printf("输入时间2：");
	scanf("%d %d",&t2,&m2);
	int c = (t1*60 + m1) - (t2*60 + m2);
	if(c<0)
	    c = 0 - c; 
	printf("时间相差：%d 分钟\n即 %d 小时 %d 分钟",c,c/60,c%60);
		
	return 0;
}
