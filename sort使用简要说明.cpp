#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define maxn 100
//��������
bool cmp(int a,int b)
{
      return a>b;
}
struct Node{
    int x, y;
    void read(){
        scanf("%d%d", &x, &y);
    }
}a[maxn];

// ���x��ͬ����x�����򣬷���y������
bool cmp1(Node c, Node d){
    if( c.x!=d.x ) return c.x<d.x;
    else return c.y<d.y;
}

// ���x��ͬ����x�Ž��򣬷���y�Ž���
bool cmp2(Node c, Node d){
    if( c.x!=d.x ) return c.x>d.x;
    else return c.y>d.y;
}

// ���x��ͬ����x�����򣬷���y�Ž���
bool cmp3(Node c, Node d){
    if( c.x!=d.x ) return c.x<d.x;
    else return c.y>d.y;
}

// ���x��ͬ����x�Ž��򣬷���y������
bool cmp4(Node c, Node d){
    if( c.x!=d.x ) return c.x>d.x;
    else return c.y<d.y;
}

int main(){
    int n=5;
    for(int i=0; i<n; ++i)
        a[i].read();  // �Լ��������һЩ�����ԣ�
    sort( a, a+n, cmp1 );  // cmp2, cmp3, cmp4;
    for(int i=0; i<n; ++i)
        printf("%d ", a[i]);
    puts("");
}
