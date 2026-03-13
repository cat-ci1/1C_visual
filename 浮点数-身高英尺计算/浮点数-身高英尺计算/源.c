#include <stdio.h>
int main()
{
	printf("Please enter your height in feet and inches respectively. ('5 7'=5 feet 7 inches):\n");
		//请分别输入身高的英尺和英寸，(如输入'5 7'表示5英尺7英寸)
	//法1：
	int foot = 0;
	int inch = 0;
	
	//foot 英尺
	scanf_s("%d %d", &foot, &inch);
	//%d 表示整数 %f表示小数 运算时有浮点数的存在就需要把整数也变成浮点数
	
	printf("your height is %f metre:",((foot + inch / 12.0) * 0.3048));

	//法2：
	double foot1 = 0;
	double inch1 = 0;
	scanf_s("%lf %lf", &foot1, &inch1);
	printf("your height is %f metre:", ((foot1 + inch1 / 12) * 0.3048));

	return 0;
}


