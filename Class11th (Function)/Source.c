#include <stdio.h>

void Function()
{
	printf("Execute");
}

void Coordinate(int x, int y)
{
	printf("�Ű� ���� x�� �� : %d\n", x);
	printf("�Ű� ���� y�� �� : %d\n", y);

}

int Damage(int damage)
{
	damage = damage * 5;

	return damage;
}

void Swap(int* a, int* b)
{
	int temporary = *b;
	*b = *a;
	*a = temporary;
}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �����ϱ� ���� 
	// ���������� ����� �ڵ��� �����Դϴ�.

	Funtion();

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// �������� ������ ���ϴ� ���� ���� �� ������,
	// ���� �̸��� �Լ��� �ߺ����� ������ �� �����ϴ�. 

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// Coordinate(5, 10);

	//printf("Damage �Լ� ��ȭ�ϴ� �� : %d\n", Damage(5));

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ���ᵵ�� �޸𸮿��� �������, ���� ����
	// �Ű� ������ ������ �� �ֽ��ϴ�.

#pragma endregion

#pragma region ����
	//�Լ��� ȣ�ٵ� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.

	//int a = 10;
	//int b = 20;
	//
	//Swap(&a, &b);
	//
	//printf("a�� �� : %d\n", a);
	//printf("b�� �� : %d\n", b);

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ���� ������ �� �ִ�
	// �μ��� �߰� �����Ǹ�, ���� �����ϴ� ������ ���� ���޹޴�
	// �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion


#pragma endregion

}