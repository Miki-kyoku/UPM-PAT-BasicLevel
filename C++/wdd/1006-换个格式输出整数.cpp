#include <iostream>
using namespace std;

int main6()
{
    int num;
    cin >> num;

    // ��ȡ�������ֵ� ��λ����ʮλ���Ͱ�λ��
    int bai = num / 100;
    int shi = num % 100 / 10;
    int ge = num % 10;

    // �ֱ�ѭ����λ��ʮλ�Ͱ�λ��
    for (int i = 0; i < bai; i++) {
        cout << 'B';
    }
    for (int i = 0; i < shi; i++) {
        cout << 'S';
    }
    for (int i = 0; i < ge; i++) {
        cout << i + 1;
    }
    cout << endl;
    return 0;
}