#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>
#define ArcSin asin//����ֵΪdouble�ͣ�����ֵ��double �ͣ�����ֵ
#define ArcCos acos//����ֵΪdouble�ͣ�����ֵ��double �ͣ�����ֵ
#define ArcTan atan//����ֵΪdouble�ͣ�����ֵ��double �ͣ�����ֵ
#define Sin sin//����ֵΪdouble�ͣ�����ֵ��double �ͣ�����ֵ
#define Cos cos//����ֵΪdouble�ͣ�����ֵ��double �ͣ�����ֵ
#define Tan tan//����ֵΪdouble�ͣ�����ֵ��double �ͣ�����ֵ
double Pi = 3.1415; //����Բ����
double ����̫���߶Ƚ�(int x,int y)//x����Сʱ,y������
{
	/*
			�߶Ƚ� = ArcSin[
			Sin[30.3230373500 * Pi / 180] *
			Sin[ArcSin[0.39795 * Cos[0.98563 * (�� - 173)]]] +
			Cos[30.3230373500 * Pi / 180] *
			Cos[ArcSin[0.39795 * Cos[0.98563 * (�� - 173)]]] * Cos[ʱ]] * 180;
	*/
	double �߶Ƚ�= ArcSin(Sin(30.3230373500 * Pi / 180) * Sin(ArcSin(0.39795 * Cos(0.98563 * (y - 173)))) + Cos(30.3230373500 * Pi / 180) * Cos(ArcSin(0.39795 * Cos(0.98563 * (y - 173)))) * Cos(x)) * 180;
	return �߶Ƚ�;
}
int main()
{
	int ��, Сʱ;
	double �߶Ƚ�[24][366];
	for (��=1; ��<=366; ��++)//����
	{
		for (Сʱ=1; Сʱ <= 24;Сʱ++)
		{
			printf("%lf\n", ����̫���߶Ƚ�(Сʱ, ��));
			//�߶Ƚ�[Сʱ][��] = ����̫���߶Ƚ�(Сʱ, ��);
		}
	}
	/*
	for (��=1; ��<=366; ��++)//����
	{
		for (Сʱ=1; Сʱ <= 24;Сʱ++)
		{
			�߶Ƚ�[Сʱ][��] = ����̫���߶Ƚ�(Сʱ, ��);
		}
	}
	FILE* fp = fopen("P:\\Users\\a1535\\Desktop\\C Language\\�о���ѧϰ��������Ŀ\\Research-Learning\\ʹ��C�������ɸ߶Ƚ�\\�߶Ƚ�����.csv", "w+");
	for (��;�� <= 366; ��++)
	{
		for (Сʱ;Сʱ <= 24; Сʱ++)
		{
			fprintf(fp, "%lf\n", �߶Ƚ�[Сʱ][��]);
		}
		fprintf(fp, "\t");
	}
	fclose(fp);
	*/
	return 0;
}