# include <stdio.h>

void main()
{
	/* 有尺寸 */
	/* 一维整形数组初始化 */
	int  array1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	/* 一维字符型数组初始化 */
	char array2[13] = "How are you!";    /* 方式一 */
	char array3[13] = {'H','o','w',' ','a','r','e',' ','y','o','u','!'};    /* 方式二 */

	/* 二维整形数组初始化 */
	int array4[4][4] = 
	{
		12, 18,  6, 25,
	    23, 10, 32, 16,
		25, 63,  1, 63,
		 0,  0, 27, 98
	};    /* 矩阵的形式 */

	/* 无尺寸 */
	/* 一维字符型数组初始化 */
	char array5[] = "How are you!";
	int array6[][2] = {
		{ 1,50},
		{45, 2},
		{ 2, 0},
		{12,32},
		{42,33},
		{15,18}
	};
}