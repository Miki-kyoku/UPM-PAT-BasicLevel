#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main9() 
{
    string str;
    stack<string> sentence;
    // ���������ֱ��ʹ��stack
    while (cin >> str) {
        sentence.push(str);
        if (cin.get() == '\n') {
            break;
        }
    }

    // ÿ�ε������һ������
    while (!sentence.empty()) {
        cout << sentence.top();
        if (sentence.size() != 1) {
            cout << " ";
        }
        sentence.pop();
    }
    cout << endl;

    return 0;
}