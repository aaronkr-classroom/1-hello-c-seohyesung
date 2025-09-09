//nums.c
#include <stdio.h>
#include <limits.h> // �ִ� ��/�ּ� �� �� ��

int main(void) {
	// char							1����Ʈ				(����)
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); //limit.h�� ���
	printf("Min: %d\n", CHAR_MIN);

	// signed short int				2����Ʈ				(����)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); //limit.h�� ���
	printf("Min: %d\n", SHRT_MIN);

	// unsigned short int			2����Ʈ				(����)
	unsigned short int ushort = 1234U; // U�� ��ȣ ���°�
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX); //limit.h�� ���

	// signed int					4����Ʈ				(����)
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); //limit.h�� ���
	printf("Min: %d\n", INT_MIN);

	// unsigned int					4����Ʈ				(����)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX); //limit.h�� ���

	// long�� �ٸ� �ü������ �ٸ� ����Ʈ ũ���Դϴ�.
	// ���� 4����Ʈ�ε� Linux/Unix/Mac���� 8����Ʈ �Դϴ�.
	// Windows���� long long�ϸ� 8����Ʈ ����� �� �ִ�.

	// signed long int				4����Ʈ				(����)
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX); //limit.h�� ���
	printf("Min: %d\n", LONG_MIN);

	// unsigned long int			4����Ʈ				(����)
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX); //limit.h�� ���

	// float (�׻� ��ȣ �ִ�)		4����Ʈ				(�Ǽ�)
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("Value: %f\n", f);
	//printf("Max: %d\n", FLT_MAX); //limit.h�� ���
	//printf("Min: %d\n", FLT_MIN);

	// double (�׻� ��ȣ �ִ�)		8����Ʈ				(�Ǽ�)
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value: %.3f\n", d);
	//printf("Max: %d\n", DBL_MAX); //limit.h�� ���
	//printf("Min: %d\n", DBL_MIN);

	return 0;
}