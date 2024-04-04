#include <stdio.h>
struct student1
{
    char lastName;
    int studentId;
    char grade;
};
typedef struct
{
    char lastName;
    int studentId;
    char grade;
} student2;
// typedef�� ������� �ʴ� ����� ����ϴ� ������� student1, student2 ����ü ����.

int main()
{
    printf("[----- [����ȯ] [2019038018] -----]");
    struct student1 st1 = {'A', 100, 'A'};         // student1�̶� ����ü�������� st1����, �ʱ�ȭ. st1.lastName�� A ����, st1.studentId�� 100 ����, st1.grade�� A ����.
    printf("st1.lastName = %c\n", st1.lastName);   // A ���
    printf("st1.studentId = %d\n", st1.studentId); // 100 ���
    printf("st1.grade = %c\n", st1.grade);         // A ���
    student2 st2 = {'B', 200, 'B'};                // student2�� ����ü�������� st2����, �ʱ�ȭ.st2.lastName�� B ����, st2.studentId�� 200 ����, st2.grade�� B ����.
    printf("\nst2.lastName = %c\n", st2.lastName); // B ���
    printf("st2.studentId = %d\n", st2.studentId); // 200 ���
    printf("st2.grade = %c\n", st2.grade);         // B ���
    student2 st3;                                  // student2�� ����ü�������� st3����
    st3 = st2;                                     // st3�� st2���� ����
    printf("\nst3.lastName = %c\n", st3.lastName); // �� ���簡 �ƴٸ� B ���
    printf("st3.studentId = %d\n", st3.studentId); // 200 ���
    printf("st3.grade = %c\n", st3.grade);         // B���
    /* equality test */
    // if(st3 == st2) /* not working */

    if (st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) // ����ü ������� ���� ���� ��� �����ϴٸ� 1��ȯ, if���� ���� �� equal\n���
        printf("equal\n");
    else
        printf("not equal\n"); // ���ϴ� ����� �� �ϳ��� ����� �ٸ��ٸ� not equal ���
    return 0;                  // �Լ� ����
}