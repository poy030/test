#include <stdio.h>
int x = 1000;
int addTen(int x){
    printf("addTen x = %d\n",x );
    x +=10;
    //for (;i < 1000;);
    //{
    //    printf("%d\n",i);
    //} หา i ไม่เจอเลย error 
    
    printf("after adder x = %d\n",x);
    return x;
}

//การประกาศฟังก์ชัน(Function Prototype)
int addT();//มีแต่medtod ดั้งเดิม ex. return...

int main()
{
    //เรื่อง loop 
    //int i=0 ; // นับตัวแปล ค่า i เป็นlocalแล้วมันจะเป็นค่าอะไรก็ไม่รู้
    //while (i < 10) //in () => เงื่อนไขหยุดloop
    //{
    //    printf("%d\n",i); //เวลาวนจะไม่วนเองต้องมี \n
    //    i += 1;
    //}
    
    //while (1) //ในภาษาc ไม่มี true ต้องใช้เป็น 1 แต่จริงๆใช้อะไรก็ได้ที่ไม่ใช่ 0 หรือnull ch
    //{
    //    printf("%d\n",i); 
    //    i += 1; //มีถึงแค่นี้จะวนตลอดแน่ ถ้าเกิดอยากจะหยุดให้กด ctrl+c
    //}
    //ถ้าให้while T หยุด ต้องใช้ break เหมือนเดิม

    //for (int i = 0; i < 10; i++) //ทุกภาษามีloopนี้หมด
    //อันแรกคือเรียกใช้ครั้งก่อนเข้าloopครั้งเดียวจบ(ตัวแปรนับรอบloop)
    //อัน2 จะเรียกใช้ก่อนจะเข้าloopใหม่ ถ้าเป็นจริง ทำต่อ ถ้าไม่ไม่ทำต่อ
    //อันสุดท้าย เรียกใช้หลังจบloopแต่ละรอบ ชช อัปเดตค่าตัวแปร
    //{
    //    printf("%d\n",i);
    //}

    //ฟังก์ชั้น ประกอบด้วย ReturnType funtionName(parameter)
    //ReturnType => primitive datatype , void
    //{ ..
    //  return...; โดยค่าreturn ต้องเป็นค่าเดียวกับ ReturnType เป็นbraek ในloop
    //}
    //ถ้าเป็น viod สามารถพิมพ์ return ; แบบนี้ได้เลย
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