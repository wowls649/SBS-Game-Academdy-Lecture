#include <stdio.h>

void main()
{
#pragma region ��� ���� ������
	// ����� ������ ������ �ش� ������ ����
	// ������ �� ������, �ٸ� ������ �ּҴ�
	// ����ų �� �ֽ��ϴ�.

	//int a = 10;
	//int b = 20;
	//
	//const int* ptr = NULL;
	//
	//ptr = &a;
	//
	////*ptr = 99;
	//
	//printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	//
	//ptr = &b;
	//
	//printf("ptr�� ����Ű�� �� : %d\n", *ptr);

#pragma endregion

#pragma region ������ ���
	// �����͸� ����� �����Ͽ�, ������ ������
	// ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������
	// �� ������ ������ �� �ֽ��ϴ�.

	//int x = 10;
	//int y = 20;
	//
	//int* const cptr = &x;
	//
	//*cptr = 99;
	//
	//printf("x������ �� : %d\n", x);
	//
	//// cpyr = &y

#pragma endregion

#pragma region �迭
	//// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.
	//
	//// [10] [20] [30] [40] [50]
	//int array[10];
	//
	//int size = sizeof(array) / sizeof(int);
	//
	//// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	array[i] = (i + 1) * 10;
	//
	//	printf("array[%d] = %d\n", i, array[i]);
	//}
	//
	//// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	//// �迭 ũ��� �������� �Ǵ� �������� ������ �޸�
	//// ������ ������ �˴ϴ�.

	//int list[] = { 1, 2, 3, 4, 5, 6, 7 };
	//
	//for (int i = 0; i < sizeof(list) / sizeof(int); i++)
	//{
	//	printf("array[%d] = %d\n", i, list[1]);
	//}

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.

	//int table[] = { 1,2,3 };
	//
	//printf("table�� �ּҴ� : %p\n", table);
	//printf("table[0]�� �ּҴ� : %p\n", table[0]);
	//
	//int* p = NULL;
	//
	//p = table;
	//
	//p = p + 1; // [] []
	//
	//*p = 135;
	//
	//printf("table[1]�� ���� : %d\n", *table);
	//
	//
	////�迭�� �������� �޸� ������ ������, �迭�� �̸���
	//// �迭�� ���� �ּҸ� ����ŵ�ϴ�.

#pragma endregion

}