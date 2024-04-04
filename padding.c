#include <stdio.h>
struct student
{                      // student라는 이름의 구조체 생성
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
};
int main()
{
    printf("[----- [김윤환] [2019038018] -----]");
    struct student pst;
    printf("size of student = %ld\n", sizeof(struct student)); /*19byte가 나와야하나 24바이트가 나온다 왜? gcc컴파일러에는
    padding 이란 기능을 지원하기 때문에 4, 8바이트에 맞춰 비트수가 채워진다. char형에서 3bytes short에서 2bytes.*/
    printf("size of int = %ld\n", sizeof(int));                // int type의 size 출력 4
    printf("size of short = %ld\n", sizeof(short));            // short type size 출력 2
    return 0;
}
