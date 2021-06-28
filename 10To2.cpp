#include<iostream>

using namespace std;

int main(){

	int num;  // num: 10진수를 입력받는 변수
	cout << "Input the decimal number: ";
	cin >> num;  // 10진수를 입력받음

	int bin[100] = { 0 };  // bin[]: 변환된 2진수를 저장하는 배열
	int i = 0;  // i: bin[]의 보조 변수

	while(num > 1){

		bin[i] = num%2;  // 2진수의 값을 하나씩 저장함

		num /= 2;  // 10진수를 계속 2로 나누어줌
		i++;
	}
	bin[i] = num;  // 최종적으로 몫을 저장함

	cout << "Binary Number: ";
	for(int j=i; j>=0; j--)
		cout << bin[j];  // 2진수로 변환된 값을 출력함

	cout << endl;

	return 0;
}