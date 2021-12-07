#include <iostream>
#include <vector>
using namespace std;

bool isPrimeNumber(const int& num);

int main13() 
{
    int a, b;
    cin >> a >> b;

    // �ȴ� 1 ��ʼ���ҳ� b ������
    vector<int> primeNumbers;
    for (int i = 1, count = 1; count <= b; i++) {
        if (isPrimeNumber(i)) {
            // �ӵ� a ����ʼ��
            if (count++ >= a) {
                primeNumbers.push_back(i);
            }
        }
    }

    // ��ӡ�����ÿ10����һ��
    unsigned count = 1;
    for (vector<int>::iterator it = primeNumbers.begin(); it != primeNumbers.end(); it++, count++) {
        cout << *it;
        if (count % 10 != 0 && count < primeNumbers.size()) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}

bool isPrimeNumber(const int& num)
{
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return num != 1;
}
