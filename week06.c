//�ǹ�ͧ���
//#include <stdio.h>
//int main()
//{
//    int x = 100;
//    printf("value of x = %d\n",x);
//    printf("referrence of x = %p\n", &x);

//    int *ptr = &x;
//    printf("value of ptr = %p\n",ptr);
//    printf("referrence of ptr = %p\n",&ptr);//��ͧ���&��˹��
//    printf("value of referrence of ptr = %d\n", *ptr);//��� * ��˹�� == �͡�����pointer 
    //���ptr+1 ���+pointer�1 ����*ptr+10 ���+���10����դ�� x += 10
//}
#include <stdio.h>
void addTen(int *x){
    *x += 10;
}

void printString(char *s){
    for (char *c = s; *c != '\0' ; c++)
    {
        printf("[%p] = %c\n",c, *c);
    }
    
}

void encrypt(char *s){
    for (char *c = s; *c != '\0'; c++)
    {
        *c +=3;
    }
    
}

int main()
{
    char s[100];
    scanf("%s",s); //&s[0]
    printString(s);
    encrypt(s);//����¹����ѹ�µç
    printf("--------------\n");
    printString(s);

    //int x = 10;//�ѹ���+ ������¹��ҵç����µç
    //addTen(&x);
    //printf("x = %d\n",x );
}