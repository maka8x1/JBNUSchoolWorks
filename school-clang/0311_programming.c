#include <stdio.h>

int main(void) {
   // 01. 자신의 이름 나이 주소 등을 3줄에 걸쳐 출력하는 프로그램
   printf("이름: 양현성\n");
   printf("나이: 18살\n");
   printf("주소: 전주시 덕진동 전북대학교 기숙사\n");

   // 02. 다음과 같은 형태로 출력하는 프로그램을 작성해보자.
   printf("Hello\nC\nProgramming\n");

   // 03. 다음과 같은 형태로 출력하는 프로그램을 작성하여보자.
   printf("-------------------------------------------------\n");
   printf("           학과 : 컴퓨터공학과                      \n");
   printf("           학번 :  202412999                      \n");
   printf("-------------------------------------------------\n");

   // 04. 다음과 같이 출력되는 프로그램을 작성하여보자.
   printf("일\t월\t화\t수\t목\t금\t토\n");
   printf("1\t2\t3\t4\t5\t6\t7\n");
   printf("8\t9\t10\t11\t12\t13\t14\n");
   printf("15\t16\t17\t18\t19\t20\t21\n");
   printf("22\t23\t24\t25\t26\t27\t28\n");
   printf("29\t30\t31\n");

   // 05. 7과 8을 가지고 사칙 연산을 한 결과를 다음과 같이 출력하는 프로그램을 작성해보자.
   printf("7 + 8 = %d\n", 7+8);
   printf("7 - 8 = %d\n", 7-8);
   printf("7 * 8 = %d\n", 7*8);
   printf("7 / 8 = %d\n", 7/8);
}