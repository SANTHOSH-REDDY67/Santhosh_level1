//WAP to find the volume of a tromboloid using 4 functions.
{
 float n;
 printf("enter the values of tromboloid h,d,b:");
 scanf("%f",&n);
 return n;
}
 float volume(float h,float d,float b)
{
 float volume= (((h*d*b)+(d/b))/3);
 return volume;
}
 void output(float v)
{
 printf("The Volume of Tromboloid is %f",v);
}
 int main()
{
 float h,d,b,v;
 h=input(h);
 d=input(d);
 b=input(b);
 v=volume(h,d,b);
 output(v);
 return 0;
}
