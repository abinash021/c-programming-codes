#include<stdio.h>
#include<math.h>
void main()

{
float a,b,c,Perimeter,s;
double Area;
printf("Enter the three side of triangle = ");
scanf("%f%f%f",&a,&b,&c);
Perimeter=a+b+c;
s=(a+b+c)/2 ;
Area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Perimeter of the triangle=%f\n" ,Perimeter);
printf("Semi Perimeter of triangle=%f\n" ,s);
printf("Area of triangle=%lf\n" ,Area);
}
