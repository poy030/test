//����c ������ʵͧ type
#include <stdio.h>
/* define name nuumber //��С�Ȥ�Ҥ���� ��ҧ��ҧ��ͻ�С�ȵ����
�ǡ�ӹǹ���
char d = 'A'; //�������ö�� "" �Ѻchar��
short
int a = 10, c = -20;
long
�ȹ���
float
double b = 12.5;
�¾ǡ�������ö�����駤�� + ��� - 
��������੾�Ф�� + ���繾ǡ unsigned �¶����ҵ�ǹ������˹�����è��繤��+��ҹ��
����c ����� data type �ͧ str ����� char + ���������([])᷹
char name[] = "kong";
*/
int a = 10;
double b = 12.5;
char d = 'A';
unsigned int c = 1000;
char name[] = "kong";
int main()
{
    /*
    //a = a + 50;
    a = a + d;
    int ch = 'A' + 10;
    printf("Hello Word!\n");
    printf("a = %05d, b = %lf\n",a,b);
    printf("c = %-10u, d = %c\n",c,d);
    printf("ch = %c\n",ch);
    printf("ch = %d\n",ch);
    */

    /*int e = 1/2; // int/int = int ���Ч������͡����0
    float r = 1/2; //int/int = int ���Ч������͡����0 �����float
    //�Ը�������¹��ǹ֧���float
    float f = 1/2.0;
    printf("e = %d, r = %f\n",e,r);
    printf("f = %f\n",f);
    */

    int t = 9%20;
    printf("t = %d\n",t);

    printf("name = %s",name);
}