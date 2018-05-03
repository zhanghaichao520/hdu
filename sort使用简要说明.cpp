#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define maxn 100
//降序排列
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

// 如果x不同，则按x排升序，否则按y排升序；
bool cmp1(Node c, Node d){
    if( c.x!=d.x ) return c.x<d.x;
    else return c.y<d.y;
}

// 如果x不同，则按x排降序，否则按y排降序；
bool cmp2(Node c, Node d){
    if( c.x!=d.x ) return c.x>d.x;
    else return c.y>d.y;
}

// 如果x不同，则按x排升序，否则按y排降序；
bool cmp3(Node c, Node d){
    if( c.x!=d.x ) return c.x<d.x;
    else return c.y>d.y;
}

// 如果x不同，则按x排降序，否则按y排升序；
bool cmp4(Node c, Node d){
    if( c.x!=d.x ) return c.x>d.x;
    else return c.y<d.y;
}

int main(){
    int n=5;
    for(int i=0; i<n; ++i)
        a[i].read();  // 自己随便输入一些数测试；
    sort( a, a+n, cmp1 );  // cmp2, cmp3, cmp4;
    for(int i=0; i<n; ++i)
        printf("%d ", a[i]);
    puts("");
}
