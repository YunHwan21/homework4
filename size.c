
#include <stdio.h>
#include <stdlib.h> //include standard library
void main()
{
    printf("[----- [����ȯ] [2019038018] -----]");
    int **x;                                    // ���������� ����.
    printf("sizeof(x) = %lu\n", sizeof(x));     // ���������ͺ����� x�� ������ ��� 8, 32��Ʈ �ӽ��� �������� ����� 4, 64��Ʈ �ӽ��� �������� ����� 8. (�ּҰ��� ���� 4bytes, 8bytes�̹Ƿ�)
    printf("sizeof(*x) = %lu\n", sizeof(*x));   // x�� ����Ű�� �������� ũ�⸦ ��� 8., x�� �����������̹Ƿ� x�� ����Ű�� ���� �ٸ� �������� �ּ�.
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // x�� ����Ű�� �����Ͱ� ����Ű�� � ���� ���� ������ ������ ���. int�̹Ƿ� 4���
}