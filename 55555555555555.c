#include <stdio.h>

int main()
{
   int a, b, gcd=1, lcm;
// ตัวแปร a, b ใช้รับค่าจำนวนที่ต้องการหาค่า
// ตัวแปร gcd ใช้เก็บค่า หรม. , lcm ใช้เก็บค่า ครน.
// gcd กำหนดค่าเริ่มต้นเป็น 1 เพราะเป็นตัวแปรที่เกี่ยวข้องกับการ
// คูณหรือหาร

   printf("Please input first number : ");
   scanf("%d", &a);
   printf("Please input second number : ");
   scanf("%d", &b);

   int x = abs(a), y = abs(b);
// จากตัวอย่าง มีการใส่ค่าติดลบ  จึงต้องใช้ฟังก์ชัน Absolute 
// เพื่อเปลี่ยนค่าติดลบให้เป็นค่าบวก
   while(y != 0)
   {
       int t = y;
       y = x%y;
       x = t;
   }
   gcd = x;
   lcm = (a*b) / gcd; // สูตรการหา ครน. เมื่อได้ หรม.แล้ว

   printf("\nThe greatest common divisor is %d\n",abs(gcd));
   printf("The least common multiple is %d",abs(lcm));
    return 0;
}
