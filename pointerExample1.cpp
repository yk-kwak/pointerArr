#include <iostream>
using namespace std;

void main() {
	int i, j, k;

	/*
	double d1,d2;
	cout << " i�� �ּ� : "<<&i << ", j�� �ּ� : " << &j << ", k�� �ּ� : " << &k << ", d1�� �ּ� : " << &d1 << ", d2�� �ּ� : " << &d2 << endl;
	
	// �ʱ�ȭ ���� ���� ����
	//cout << i << "/" << j << "/" << k << endl;
	*/

	int *ptr;
	ptr = &i;
	*ptr = 10;

	j = *ptr + 10;
	

	cout << "i�� �� = " << i << endl;
	cout << "j�� �� = " << j << endl;


}