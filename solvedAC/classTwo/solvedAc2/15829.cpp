#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(void) {
	int n, hash = 31;
	long long hashed = 0;
	char input[50];
	//�Է��� ���� �ҹ��ڸ�, ASCII 'a'==97
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < n; i++) {
		//��Ģ ���� ���� ������ �������� �켱�˴ϴ�. ���� ���ô� ��ȣġ��
		hashed += ((int)input[i] - 96) * (int)pow(hash, i);
		//cout << (int)input[i] - 96 << " ";
		//cout << (int)pow(hash, i) << " " << i;
		//cout << hashed << '\n';
	}
	cout << hashed;
}