#include int renji();

int renren();

int renji()

{

int n,k,a,b,m;

printf("分别输入山数，每次最大搬山量，用空格隔开，回车结束\n");

scanf("%d%d",&n,&k);

printf("开始了，你先来吧。\n");

for(;n>0;)

{

scanf("%d",&a);

if(a>k){printf("搬山数需小于%d个\n",k);continue;}

if(n-a<0){printf("没有那么多山了。。。\n");continue;}

if(a==0){printf("不能不搬山\n");continue;}

if(n-a==1){printf("好吧你赢了\n");break;}

if(n-a==0){printf("哈哈哈哈，你输了，猪\n");break;}

n=n-a;

if(n>k)

{

b=(n-1)%(k+1);

if(b==0)b=1;

}

else b=n-1;

n=n-b;

printf("对手搬%d个,剩%d个\n",b,n);

}

return 0;

}

int renren()

{

int a,b,c,d,i,j;

printf("分别输入人数、山数，每次最大搬山量，用空格隔开，回车结束\n");

scanf("%d%d%d",&a,&b,&c);

if(a<2)

{

printf("%d个人怎么玩。。。\n");

return 0;

}

for(;b>0;)

{

for(i=1;;i++)

{

printf("下面由第%d位玩家搬山\n",i);

goto L;

L:scanf("%d",&j);

if(j>c)

{

printf("搬山数需小于%d个\n",c);

goto L;

}

if(b-j<0)

{

printf("没有那么多山了。。。\n");

goto L;

}

if(j==0)

{

printf("不能不搬山\n");

goto L;

}

if(b-j==1)

{

printf("恭喜你赢了！\n\n");

return 0;

}

if(b-j==0)

{

printf("你输得很奇怪。\n\n");

return 0;

}

b=b-j;

printf("第%d位玩家搬%d个，剩余%d个",i,j,b);

if(i==a)i=0;

}

}

return 0;

}

int main()

{

int q,p;

system("color D1");

system("mode con cols=60 lines=12");

printf("\n\n 设有n座山，比赛的双方或多方轮流搬山\n");

printf(" 由你先搬第一座山，谁搬了最后一座山谁输\n");

for(;;)

{

printf(" 输入1:人机对战 2:人人对战\n");

scanf("%d",&p);

if(p==1)renji();

if(p==2)renren();

if(p!=1&&p!=2)

{

printf("别闹，好好输入。。。\n");

continue;

}

printf("再来一局？\n");

printf("输入1继续，其余结束\n");

scanf("%d",&q);

if(q!=1)break;

else printf("加油，少年！\n\n");

}

printf("游戏结束。");

return 0;

}
