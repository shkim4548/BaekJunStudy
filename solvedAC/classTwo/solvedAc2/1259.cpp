#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string n;
	bool ans;
	char input;
	for (int i = 0; i < 100; i++) {
		cin >> input;
		n.push_back(input);
		//����ó��
		//0 �Է½� ����
		if (input == '0') return;
		//ù�ڸ��� 0�� ��� ����
		else if (n[0] == '0') return;
		//�翬�� ¦���� �縰��Ҽ� �� �� ����
		else if (n.size() % 2 == 0) ans = false;
	}
	return 0;
}