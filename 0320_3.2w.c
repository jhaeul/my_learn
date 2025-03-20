//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
// #define _CRT_SECURE_NO_WARNINGS -> stdio 전에 해야함 이 줄에 작성 시 읽히지안음

//void main(void) {
//	int num = 0;
//	printf("숫자 입력해 주세요");
//	scanf("%d", &num);
//	printf("입력한 숫자는 %d 입니다.\n", num);
//}

// 숫자 두개 입려하고싶을때
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main(void) {
//	int num1 = 0; // 실수 입력하고 싶을 때ex.2.2 입력 -> int 대신 float  쓰기; float num1 = 0.0;
//	int num2 = 0;
//	printf("숫자 입력해 주세요");
//	scanf("%d %d", &num1, &num2);
//	printf("입력한 숫자는 %d %d입니다.\n", num1, num2);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main(void) {
//	char char_x;
//	printf("문자하나 입력해 주세요");
//	scanf("%c", &char_x);
//	printf("입력한 문자는 %c 입니다.\n");
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void) {
	char char_x;
	printf("문자하나 입력해 주세요");
	scanf("%c", &char_x);
	printf("입력한 문자는 %c 입니다.\n"); char_x;
}