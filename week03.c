#include <stdio.h>
int x = 1000;
int addTen(int x){
    printf("addTen x = %d\n",x );
    x +=10;
    //for (;i < 1000;);
    //{
    //    printf("%d\n",i);
    //} �� i �������� error 
    
    printf("after adder x = %d\n",x);
    return x;
}

//��û�С�ȿѧ��ѹ(Function Prototype)
int addT();//����medtod ������ ex. return...

int main()
{
    //����ͧ loop 
    //int i=0 ; // �Ѻ����� ��� i ��local�����ѹ���繤�����á�������
    //while (i < 10) //in () => ���͹���شloop
    //{
    //    printf("%d\n",i); //����ǹ�����ǹ�ͧ��ͧ�� \n
    //    i += 1;
    //}
    
    //while (1) //�����c ����� true ��ͧ���� 1 ���ԧ������á���������� 0 ����null ch
    //{
    //    printf("%d\n",i); 
    //    i += 1; //�ն֧�����ǹ��ʹ�� ����Դ��ҡ����ش��顴 ctrl+c
    //}
    //������while T ��ش ��ͧ�� break ����͹���

    //for (int i = 0; i < 10; i++) //�ء������loop������
    //�ѹ�á������¡����駡�͹���loop�������Ǩ�(����ùѺ�ͺloop)
    //�ѹ2 �����¡���͹�����loop���� ����繨�ԧ �ӵ�� ���������ӵ��
    //�ѹ�ش���� ���¡����ѧ��loop�����ͺ �� �ѻവ��ҵ����
    //{
    //    printf("%d\n",i);
    //}

    //�ѧ���� ��Сͺ���� ReturnType funtionName(parameter)
    //ReturnType => primitive datatype , void
    //{ ..
    //  return...; �¤��return ��ͧ�繤�����ǡѺ ReturnType ��braek �loop
    //}
    //����� viod ����ö����� return ; Ẻ��������
    int x = 10;
    int y = addTen(x);
    printf("x = %d, y = %d\n", x, y );
    int z = addT();
    printf("x = %d, y = %d z = %d \n", x, y ,z);

    int addT();
    {
    printf("add x = %d\n", x);
    x +=20;
    printf("after x = %d, y = %d\n", x);
    return x;
    }
}