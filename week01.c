//ภาษาc เป็นภาษาสตอง type
#include <stdio.h>
/* define name nuumber //ประกาศค่าคงที่ ข้างล่างคือประกาศตัวแปร
พวกจำนวนเต็ม
char d = 'A'; //ไม่สามารถใช้ "" กับcharได้
short
int a = 10, c = -20;
long
ทศนิยม
float
double b = 12.5;
โดยพวกนี้สามารถเป็นได้ทั้งค่า + และ - 
แต่ถ้าเป็นเก็บเฉพาะค่า + จะเป็นพวก unsigned โดยถ้าเอาตัวนี้ไปใส่หน้าอะไรจะเป็นค่า+เท่านั้น
ภาษาc ไม่มี data type ของ str แต่จะใช้ char + ตัวอาเรย์([])แทน
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

    /*int e = 1/2; // int/int = int เพราะงั้นเลยออกมาเป็น0
    float r = 1/2; //int/int = int เพราะงั้นเลยออกมาเป็น0 แค่เก็บในfloat
    //วิธีแค่เปลี่ยนตัวนึงเป็ฯfloat
    float f = 1/2.0;
    printf("e = %d, r = %f\n",e,r);
    printf("f = %f\n",f);
    */

    int t = 9%20;
    printf("t = %d\n",t);

    printf("name = %s",name);
}