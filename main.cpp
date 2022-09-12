#include <iostream>
#include "binary_tree.h"

using namespace std;

int main()
{
    binary_tree bt;
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        char x, y, z;
        cin >> x >> y >> z;	// 알파벳 입력
        x = x-'A';		// 문자 -> 숫자 변환
        if (y == '.')
        {		// 입력이 .이면 그 자리에 -1 대입
            bt.a[x][0] = -1;
        }
        else
        {
            bt.a[x][0] = y-'A';
        }
        if(z == '.')
        {
            bt.a[x][1] = -1;
        }
        else
        {
            bt.a[x][1] = z-'A';
        }
    }
    bt.preorder(0);
    cout << '\n';
    bt.inorder(0);
    cout << '\n';
    bt.postorder(0);
    cout << '\n';
    return 0;
}


