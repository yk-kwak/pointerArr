#include <iostream>
using namespace std;

void swap(int *x, int *y) // x,y�� �ּҰ��� ����־���, x,y���� ��ȯ
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

}

void main() {
	int i, j;
	i = 10;
	j = 20;

	swap(&i, &j);

	cout << i << " / " << j << endl;
}