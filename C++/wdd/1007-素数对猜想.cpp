#include <iostream>
using namespace std;

int isPrimeNumber(const int& num);

int main7()
{
    int n, count = 0;
    cin >> n;
    for (int i = 3; i <= n; i++) {
        // �ж� ��ǰ���� �� ����- 2�����������������ô����һ��
        if (isPrimeNumber(i - 2) && isPrimeNumber(i)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

// �ж��Ƿ�������
int isPrimeNumber(const int& num)
{
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return num != 1;
}