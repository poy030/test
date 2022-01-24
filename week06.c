//ทวนของเก่า
//#include <stdio.h>
//int main()
//{
//    int x = 100;
//    printf("value of x = %d\n",x);
//    printf("referrence of x = %p\n", &x);

//    int *ptr = &x;
//    printf("value of ptr = %p\n",ptr);
//    printf("referrence of ptr = %p\n",&ptr);//ต้องเอา&นำหน้า
//    printf("value of referrence of ptr = %d\n", *ptr);//ตัว * นำหน้า == บอกว่าเป็นpointer 
    //ถ้าptr+1 คือ+pointerไป1 แต่ถ้า*ptr+10 คือ+ค่า10ซึ่งมีค่า x += 10
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
    encrypt(s);//เปลี่ยนค่ามันโดยตรง
    printf("--------------\n");
    printString(s);

    //int x = 10;//มันส่งไป+ โดยเปลี่ยนค่าตรงนั้นโดยตรง
    //addTen(&x);
    //printf("x = %d\n",x );
}