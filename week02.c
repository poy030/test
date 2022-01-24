#include<stdio.h>
#include <stdlib.h> //แปลงอาเรเป็นdata type

int main() {
    //รับinputเป็นstr(ชาอะเล)แล้วแปลงเป็นdatatypeของมัน ex รับstrแล้วเปลี่ยนเป็นint
    /*    char str[10];
        gets(str); //ต้องระวังgetsมีโอกาสoverflowได้ เพราะมันเก็ยได้9ตัวถึงรันแล้วจะไม่errorก็เถอะ
        printf("input - %s\n-------------------\n", str);
        fgets(str, 10, stdin); //อันแรกเป็นcharอะเล อันที่2เป็นbuffer(ที่เก็บชั่วคราว)และขนาดของbuffer ต้องไม่มากกว่าของcharอเลอันแรกและอันสุดท้าย
        printf("input - %s", str);
    */
    //scanf ใช้รับinputได้
/*
        char str_i[10];
        char str_f[10];
        char str_l[10];

        printf("Enter i = ");//ถ้าอยากให้มันแสดงต้องเขียนเอง
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

    //ภาษาc ไม่มีboolean เราจะใช้ค่าความจริงแทน เช่น
    //false
    int found = 0;
    float f = 0.0;
    char c = '\0';//null charector , terminate chrector...ascii code 0
    
    //true
    int isExist =1;
    char str[10] = "";
    // "kong" => ['k', 'o', 'n', 'g', '\0'] มันจำแค่อินเด็กแรก และต้องเพื่อไว้1ช่อง เพื่อเก็บ \0 เนี่ยแหละ

    char inp[10];
    fgets(inp, 10, stdin);
    int i = atoi(inp);
    
    //ข้างในประกอบปด้วย relational(เปรียบเทียบระหว่าง) operator > >= <= == !=
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
        printf("else %d %d",i < 0, i>=0 && i <100);//พวกนี้คือมันไม่ต้องกับค่าเลยเป็น0ออกมาแสดงว่าาเป็น false
    }
}