//求 1-n的全排列
#include <stdio.h>
int n;
int a[10],book[10];//book 数组表示i 是否已经被用
int main()
{
  printf("input the  n\n");
  scanf("%d\n", &n);
  dfs(1);//从第一个步开始搜～
  return 0;
}
void dfs(int step)
{
  int i;
  if(step==n+1)//1-n 到n+1时候代表找到了一个全排列
  {
    for(i=1;i<=n;i++)
    {
      printf("%d",a[i]);
    }
    printf("\n");
    return;
  }
  for(i=1;i<=n;i++)//比如从一开始找，做一次循环
  {
    if(book[i]==0)
    {
      a[step]=i;//把i放到第step位上，然后把i标记已放入. 然后全找step+1位
      book[i]=1;
       dfs(step+1);
       book[i]=0;// 上面的递归完成表示已找到一个，然后重新找，记得收回之前放的数，才能进行下一次查找全排列操作
    }
  }
  return;
}
