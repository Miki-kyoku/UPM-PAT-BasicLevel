#include <iostream>
using namespace std;

int main11() 
{
    //������Ҫʹ��long����Ϊint��64λ�����ϵ�ȡֵ��ΧΪ��-2^32��2^32-1��
    int row;
    long int a, b, c;

    cin >> row;
    for (int i = 0; i < row; i++) {
        cin >> a >> b >> c;
        // boolalpha ���԰� 1 0 ת�� true false ���
        cout << "Case #" << i + 1 << ": " << boolalpha << (a + b > c) << endl;
    }

    return 0;
}