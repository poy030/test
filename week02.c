#include<stdio.h>
#include <stdlib.h> //�ŧ������data type

int main() {
    //�Ѻinput��str(������)�����ŧ��datatype�ͧ�ѹ ex �Ѻstr��������¹��int
    /*    char str[10];
        gets(str); //��ͧ���ѧgets���͡��overflow�� �����ѹ�����9��Ƕ֧�ѹ���Ǩ����error�����
        printf("input - %s\n-------------------\n", str);
        fgets(str, 10, stdin); //�ѹ�á��char���� �ѹ���2��buffer(����纪��Ǥ���)��Т�Ҵ�ͧbuffer ��ͧ����ҡ���Ңͧchar����ѹ�á����ѹ�ش����
        printf("input - %s", str);
    */
    //scanf ���Ѻinput��
/*
        char str_i[10];
        char str_f[10];
        char str_l[10];

        printf("Enter i = ");//�����ҡ����ѹ�ʴ���ͧ��¹�ͧ
        fgets(str_i, 10, stdin);

        printf("Enter f = ");
        fgets(str_f, 10, stdin);

        printf("Enter l = ");
        fgets(str_l, 10, stdin);

        //covert array to real data type
        int i = atoi(str_i);
        float f = atof(str_f);
        long l = atol(str_l);
        printf("%d - %f - %ld", i, f, l);
*/  

    //����c �����boolean ��Ҩ����Ҥ�����ԧ᷹ ��
    //false
    int found = 0;
    float f = 0.0;
    char c = '\0';//null charector , terminate chrector...ascii code 0
    
    //true
    int isExist =1;
    char str[10] = "";
    // "kong" => ['k', 'o', 'n', 'g', '\0'] �ѹ�����Թ���á ��е�ͧ�������1��ͧ ������ \0 ��������

    char inp[10];
    fgets(inp, 10, stdin);
    int i = atoi(inp);
    
    //��ҧ㹻�Сͺ����� relational(���º��º�����ҧ) operator > >= <= == !=
    //logical operator && || !
    if (i < 0)
    {
        printf("if %d", i < 0);
    }
    else if(i >= 0 && i < 100)
    {
        printf("else if %d ", i>=0 && i <100);
    }
    else
    {
        printf("else %d %d",i < 0, i>=0 && i <100);//�ǡ������ѹ����ͧ�Ѻ��������0�͡���ʴ������� false
    }
}