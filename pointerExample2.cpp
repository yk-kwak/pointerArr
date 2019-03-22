#include <iostream>
using namespace std;

void swap(int *x, int *y) // x,y의 주소값을 집어넣어줌, x,y값을 교환
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