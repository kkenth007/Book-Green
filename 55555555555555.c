#include <stdio.h>

int main()
{
   int a, b, gcd=1, lcm;
// ����� a, b ���Ѻ��Ҩӹǹ����ͧ����Ҥ��
// ����� gcd ���纤�� ���. , lcm ���纤�� �ù.
// gcd ��˹������������� 1 �����繵���÷������Ǣ�ͧ�Ѻ���
// �ٳ�������

   printf("Please input first number : ");
   scanf("%d", &a);
   printf("Please input second number : ");
   scanf("%d", &b);

   int x = abs(a), y = abs(b);
// �ҡ������ҧ �ա������ҵԴź  �֧��ͧ��ѧ��ѹ Absolute 
// ��������¹��ҵԴź����繤�Һǡ
   while(y != 0)
   {
       int t = y;
       y = x%y;
       x = t;
   }
   gcd = x;
   lcm = (a*b) / gcd; // �ٵá���� �ù. ������� ���.����

   printf("\nThe greatest common divisor is %d\n",abs(gcd));
   printf("The least common multiple is %d",abs(lcm));
    return 0;
}
