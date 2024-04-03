#include <stdio.h>
struct student1 {
char lastName;
int studentId;
char grade;
};
typedef struct {
char lastName;
int studentId;
char grade;
} student2;
//typedef를 사용하지 않는 방법과 사용하는 방법으로 student1, student2 구조체 생성.

int main() {
struct student1 st1 = {'A', 100, 'A'}; //student1이란 구조체변수에서 st1선언, 초기화. st1.lastName에 A 저장, st1.studentId에 100 저장, st1.grade에 A 저장. 
printf("st1.lastName = %c\n", st1.lastName); //A 출력
printf("st1.studentId = %d\n", st1.studentId);//100 출력
printf("st1.grade = %c\n", st1.grade);//A 출력
student2 st2 = {'B', 200, 'B'}; //student2란 구조체변수에서 st2선언, 초기화.st2.lastName에 B 저장, st2.studentId에 200 저장, st2.grade에 B 저장.
printf("\nst2.lastName = %c\n", st2.lastName);//B 출력
printf("st2.studentId = %d\n", st2.studentId);//200 출력
printf("st2.grade = %c\n", st2.grade);//B 출력
student2 st3;//student2란 구조체변수에서 st3선언
st3 = st2; //st3에 st2값을 복사
printf("\nst3.lastName = %c\n", st3.lastName);//잘 복사가 됐다면 B 출력
printf("st3.studentId = %d\n", st3.studentId);// 200 출력
printf("st3.grade = %c\n", st3.grade);// B출력
/* equality test */
//if(st3 == st2) /* not working */

if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) //구조체 멤버들을 각각 비교해 모두 동일하다면 1반환, if조건 만족 후 equal\n출력
printf("equal\n");
else
printf("not equal\n");//비교하는 멤버들 중 하나의 멤버라도 다르다면 not equal 출력
return 0; //함수 종료
}