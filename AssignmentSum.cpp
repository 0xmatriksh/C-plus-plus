
#include <iostream>
#include <vector>
const int N=40;
inline void sum(vector<int> d)
{
int i;
*p = 0;
for(i = 0; i < n; ++i)
*p = *p + d[i];
}

int main()
{
int i;
int accum = 0;
//int data[N];
vector<int> data;
for(i = 0; i < N; ++i){
data[i] = i;
}
sum(&accum, N, data);
printf("sum is %d\n", accum);
return 0;

}
