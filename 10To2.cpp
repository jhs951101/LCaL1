#include<iostream>

using namespace std;

int main(){

	int num;  // num: 10������ �Է¹޴� ����
	cout << "Input the decimal number: ";
	cin >> num;  // 10������ �Է¹���

	int bin[100] = { 0 };  // bin[]: ��ȯ�� 2������ �����ϴ� �迭
	int i = 0;  // i: bin[]�� ���� ����

	while(num > 1){

		bin[i] = num%2;  // 2������ ���� �ϳ��� ������

		num /= 2;  // 10������ ��� 2�� ��������
		i++;
	}
	bin[i] = num;  // ���������� ���� ������

	cout << "Binary Number: ";
	for(int j=i; j>=0; j--)
		cout << bin[j];  // 2������ ��ȯ�� ���� �����

	cout << endl;

	return 0;
}