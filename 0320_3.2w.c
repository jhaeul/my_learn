//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
// #define _CRT_SECURE_NO_WARNINGS -> stdio ���� �ؾ��� �� �ٿ� �ۼ� �� ����������

//void main(void) {
//	int num = 0;
//	printf("���� �Է��� �ּ���");
//	scanf("%d", &num);
//	printf("�Է��� ���ڴ� %d �Դϴ�.\n", num);
//}

// ���� �ΰ� �Է��ϰ������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main(void) {
//	int num1 = 0; // �Ǽ� �Է��ϰ� ���� ��ex.2.2 �Է� -> int ��� float  ����; float num1 = 0.0;
//	int num2 = 0;
//	printf("���� �Է��� �ּ���");
//	scanf("%d %d", &num1, &num2);
//	printf("�Է��� ���ڴ� %d %d�Դϴ�.\n", num1, num2);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main(void) {
//	char char_x;
//	printf("�����ϳ� �Է��� �ּ���");
//	scanf("%c", &char_x);
//	printf("�Է��� ���ڴ� %c �Դϴ�.\n");
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void) {
	char char_x;
	printf("�����ϳ� �Է��� �ּ���");
	scanf("%c", &char_x);
	printf("�Է��� ���ڴ� %c �Դϴ�.\n"); char_x;
}