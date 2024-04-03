#include<stdio.h>
#include<stdlib.h> //include standard library 
void main()
{
int **x; //이중포인터 선언.
printf("sizeof(x) = %lu\n", sizeof(x)); //이중포인터변수인 x의 사이즈 출력 8, 32비트 머신은 포인터의 사이즈가 4, 64비트 머신은 포인터의 사이즈가 8. (주소값이 각각 4bytes, 8bytes이므로)
printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 가르키는 포인터의 크기를 출력 8., x는 이중포인터이므로 x가 가르키는 것은 다른 포인터의 주소.
printf("sizeof(**x) = %lu\n", sizeof(**x)); //x가 가르키는 포인터가 가르키는 어떤 곳의 값의 데이터 사이즈 출력. int이므로 4출력
}