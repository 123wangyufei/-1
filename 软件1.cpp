#include int renji();

int renren();

int renji()

{

int n,k,a,b,m;

printf("�ֱ�����ɽ����ÿ������ɽ�����ÿո�������س�����\n");

scanf("%d%d",&n,&k);

printf("��ʼ�ˣ��������ɡ�\n");

for(;n>0;)

{

scanf("%d",&a);

if(a>k){printf("��ɽ����С��%d��\n",k);continue;}

if(n-a<0){printf("û����ô��ɽ�ˡ�����\n");continue;}

if(a==0){printf("���ܲ���ɽ\n");continue;}

if(n-a==1){printf("�ð���Ӯ��\n");break;}

if(n-a==0){printf("���������������ˣ���\n");break;}

n=n-a;

if(n>k)

{

b=(n-1)%(k+1);

if(b==0)b=1;

}

else b=n-1;

n=n-b;

printf("���ְ�%d��,ʣ%d��\n",b,n);

}

return 0;

}

int renren()

{

int a,b,c,d,i,j;

printf("�ֱ�����������ɽ����ÿ������ɽ�����ÿո�������س�����\n");

scanf("%d%d%d",&a,&b,&c);

if(a<2)

{

printf("%d������ô�档����\n");

return 0;

}

for(;b>0;)

{

for(i=1;;i++)

{

printf("�����ɵ�%dλ��Ұ�ɽ\n",i);

goto L;

L:scanf("%d",&j);

if(j>c)

{

printf("��ɽ����С��%d��\n",c);

goto L;

}

if(b-j<0)

{

printf("û����ô��ɽ�ˡ�����\n");

goto L;

}

if(j==0)

{

printf("���ܲ���ɽ\n");

goto L;

}

if(b-j==1)

{

printf("��ϲ��Ӯ�ˣ�\n\n");

return 0;

}

if(b-j==0)

{

printf("����ú���֡�\n\n");

return 0;

}

b=b-j;

printf("��%dλ��Ұ�%d����ʣ��%d��",i,j,b);

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

printf("\n\n ����n��ɽ��������˫����෽������ɽ\n");

printf(" �����Ȱ��һ��ɽ��˭�������һ��ɽ˭��\n");

for(;;)

{

printf(" ����1:�˻���ս 2:���˶�ս\n");

scanf("%d",&p);

if(p==1)renji();

if(p==2)renren();

if(p!=1&&p!=2)

{

printf("���֣��ú����롣����\n");

continue;

}

printf("����һ�֣�\n");

printf("����1�������������\n");

scanf("%d",&q);

if(q!=1)break;

else printf("���ͣ����꣡\n\n");

}

printf("��Ϸ������");

return 0;

}
