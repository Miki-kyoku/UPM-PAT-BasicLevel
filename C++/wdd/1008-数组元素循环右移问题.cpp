#include <iostream>
using namespace std;

// ����Ԫ��ѭ���������� 
int main8()
{
    // n Ϊ����size��m Ϊ�ƶ���λ��
    int n, m;
    cin >> n;
    cin >> m;

    // �������ʱ�򣬽�����λ����
    // �� �� m λ��ʼ��ѭ�� n + m ��
    int* nums = new int[n];
    for (int i = m; i < n + m; i++) {
        // ÿ���ڵ� (n + i) % n ��λ�������룬�����γ���һ����
        cin >> nums[(n + i) % n];
    }

    // ѭ����ӡ
    for (int i = 0; i < n; i++) {
        cout << nums[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}