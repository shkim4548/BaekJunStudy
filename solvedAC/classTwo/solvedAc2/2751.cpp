#include<iostream>
using namespace std;

//�켱 ���� ���ķ� �����ϰ�, ���� �� �տ� ������ ������ �ڿ��� ����
int main(void) {
	int n, t;
	int a[100];
	cin >> n;
	//���⼭ �迭 �Է� �ް�
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			//���� ���� ����
			if (a[i] > a[j]) {
				//�ߺ��˻�
				if (a[i] == a[j]) {
					// �տ��Ŷ� �ڿ��Ŷ� ������ �ڿ��� �տ��ɷ� ������.
					a[j] = a[i];
				}
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
}