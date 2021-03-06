#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>
#define ArcSin asin//输入值为double型，返回值是double 型，弧度值
#define ArcCos acos//输入值为double型，返回值是double 型，弧度值
#define ArcTan atan//输入值为double型，返回值是double 型，弧度值
#define Sin sin//输入值为double型，返回值是double 型，弧度值
#define Cos cos//输入值为double型，返回值是double 型，弧度值
#define Tan tan//输入值为double型，返回值是double 型，弧度值
double Pi = 3.1415; //定义圆周率
double 计算太阳高度角(int x, int y)//x代表小时,y代表天
{
	/*
			高度角 = ArcSin[
			Sin[30.3230373500 * Pi / 180] *
			Sin[ArcSin[0.39795 * Cos[0.98563 * (天 - 173)]]] +
			Cos[30.3230373500 * Pi / 180] *
			Cos[ArcSin[0.39795 * Cos[0.98563 * (天 - 173)]]] * Cos[时]] * 180;
	*/
	double 角 = ArcSin(Sin(30.3230373500 * Pi / 180) * Sin(ArcSin(0.39795 * Cos(0.98563 * (y - 173)))) + Cos(30.3230373500 * Pi / 180) * Cos(ArcSin(0.39795 * Cos(0.98563 * (y - 173)))) * Cos(x)) * 180;
	return 角;
}
int main()
{
	int 天_1, 小时_1;
	double 高度角[24][366] = { 0,0 };
	for (天_1=1; 天_1<=366; 天_1++)//计算
	{
		for (小时_1=1; 小时_1 <= 24;小时_1++)
		{
			高度角[小时_1-1][天_1-1] = 计算太阳高度角(小时_1, 天_1);
		}
	}
	int 天,小时;
	/*FILE* fp = fopen("P:\\Users\\a1535\\Desktop\\C Language\\研究性学习的完整项目\\Research-Learning\\使用C语言生成高度角\\高度角数据.csv", "w+");
	for (天=1;天 <= 366; 天++)
	{
		for (小时=1;小时 <= 24; 小时++)
		{
			fprintf(fp, "%lf\n", 高度角[小时-1, 天-1]);
		}
		fprintf(fp, "\r");
	}*/
	FILE* fp = fopen("P:\\Users\\a1535\\Desktop\\C Language\\研究性学习的完整项目\\Research-Learning\\使用C语言生成高度角\\高度角数据.txt", "w+");
	for (天 = 1; 天 <= 366; 天++)
	{
		for (小时 = 1; 小时 <= 24; 小时++)
		{
			fprintf(fp, "%lf\n", 高度角[小时 - 1, 天 - 1]);
		}
		fprintf(fp, "\r");
	}
	fclose(fp);
	return 0;
}