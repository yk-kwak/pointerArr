#include <iostream>
using namespace std;

void main() {

	/*
	int arr[10];

	cout << "arr ��� : "<<arr << " / &arr ��� : " << &arr << " / &arr[0] ��� : " << &arr[0] << endl;
	*/

	double score[10] = {};
	double *ptr = NULL;

	ptr = score;

	cout << score << " / " << &score << " / " << &score[0] << endl;

	for (int i = 0; i < 10; i++) {

		
		//cout << i << "��° ������ �ּ� = " << &score[i] <<" / "<< score + i << endl;  //�ʱ�ȭ�� ��Ű�� �ʾƼ� �̻��� ���� ����
		//cout << i << "��° ������ �� = " << score[i] << endl;
		//cout << i << "��° ������ �� = " << *(score + i) << endl;
		//cout << i << "��° ������ �� = " << *(&score[i]) << endl; //*�� &�� ����
		cout << i << "��° ������ �� = " << *score + i << endl; //��ȣ�� ��ġ�ٸ�. *score = ���Ұ�. �迭�� �����ּҿ� �ִ� ��

		//score = ptr; //���ʿ� ������ ����. score�� �ٲ� ������ �ƴϴ�.
	}
}