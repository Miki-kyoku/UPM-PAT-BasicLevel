#include <iostream>
using namespace std;

int main1()
{
    int n;
    cin >> n;

    // ͳ�Ƽ����˶��ٲ�
    int count = 0;
    while (n != 1) {
        // �����ż����ȡһ��
        if (n % 2 == 0) {
            n /= 2;
        } else {
            // ���� ȡ��3 * n + 1����һ��
            n = (3 * n + 1) / 2;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}