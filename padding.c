#include <stdio.h>
struct student
{                      // student��� �̸��� ����ü ����
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
};
int main()
{
    printf("[----- [����ȯ] [2019038018] -----]");
    struct student pst;
    printf("size of student = %ld\n", sizeof(struct student)); /*19byte�� ���;��ϳ� 24����Ʈ�� ���´� ��? gcc�����Ϸ�����
    padding �̶� ����� �����ϱ� ������ 4, 8����Ʈ�� ���� ��Ʈ���� ä������. char������ 3bytes short���� 2bytes.*/
    printf("size of int = %ld\n", sizeof(int));                // int type�� size ��� 4
    printf("size of short = %ld\n", sizeof(short));            // short type size ��� 2
    return 0;
}
