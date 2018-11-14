#include <iostream>

int pow (int a, int p)
{
    int temp=1;
    for(int i=0; i<p; ++i)
    {
        temp*=a;
    }
    return temp;
}
int fact (int a)
{
    int temp=1;
    for(int i=2; i<=a; ++i)
    {
        temp*=i;
    }
    return temp;
}
void fib_number(int a)
{
    int t1=0;
    int t2=1;
    int t3;
    std::cout<<t1<<std::endl;
    std::cout<<t2<<std::endl;
    for(int i=0; i<a-2; ++i)
    {
        t3=t1+t2;
        std::cout<<t3<<std::endl;
        t1=t2;
        t2=t3;
    }
}
void fib_array(int*array, int size)
{
    array[0]=0;
    array[1]=1;
    std::cout<<array[0]<<std::endl;
    std::cout<<array[1]<<std::endl;
    for(int i=2; i<size; ++i)
    {
    	array[i]=array[i-2]+array[i-1];
        std::cout<<array[i]<<std::endl;
    }
}
bool pal_number(int a)
{
    int temp=a;
    int res=0;
    for(; temp!=0; temp/=10)
    {
        res=res*10+temp%10;
    }
    if(a==res)
    {
        return 1;
    }
    return 0;
}
bool pal_array(int*array_1, int size)
{
    int j = size-1;
    for(int i=0; i<j; ++i, --j)
    {
        if(array_1[i]==array_1[j])
        {
            return 1;
        }
        return 0;
    }
}
int sum_numeral_ch(int a)
{
    int sum=0;
    for(; a!=0; a/=10)
    {
        sum+=a%10;
    }
    return sum;
}
int discharges_ch(int a)
{
    int temp=0;
    for(; a!=0; a/=10)
    {
        ++temp;
    }
    return temp;
}
void even_ch (int first, int last)
{
    for(; first<=last; ++first)
    {
        if(first%2==0)
        {
            std::cout<<first<<std::endl;
        }
    }
}
void min_ch_iz_3(int a, int b, int c)
{
    if(a<b && a<c)
    {
        std::cout<<a<<std::endl;
    }
    if(b<a && b<c)
    {
        std::cout<<b<<std::endl;
    }
    if(c<a && c<b)
    {
        std::cout<<c<<std::endl;
    }
}
void min_ch_iz_4(int a, int b, int c, int d)
{
    if(a<b && a<c && a<d)
    {
        std::cout<<a<<std::endl;
    }
    if(b<a && b<c && b<d)
    {
        std::cout<<b<<std::endl;
    }
    if(c<a && c<b && c<d)
    {
        std::cout<<c<<std::endl;
    }
    if(d<a && d<b && d<c)
    {
        std::cout<<d<<std::endl;
    }
}
int sum_el_array(int*array_1, int size)
{
    int temp=0;
    for(int i=0; i<size; ++i)
    {
        temp+=array_1[i];
    }
    return temp;
}
int max_el_array(int*array_1, int first, int last)
{
    int max_el=array_1[first];
    int index=first;
    for(; first<last; ++first)
    {
        if(max_el<array_1[first])
        {
            max_el=array_1[first];
            index=first;
        }
    }
    return index;
}
int min_el_array(int*array_1, int first, int last)
{
    int min_el=array_1[first];
    int index=first;
    for(; first<last; ++first)
    {
        if(min_el>array_1[first])
        {
            min_el=array_1[first];
            index=first;
        }
    }
    return index;
}
int main()
{
   int array [] = {};
   int array_1 [5] = {2,4,3,4,2};
   int powr = pow(2,4);
   std::cout<< powr <<std::endl;
   int factr = fact(4);
   std::cout<<factr<<std::endl;
   fib_number(10);
   fib_array(array,10);
   bool pal_numberr= pal_number(252);
   std::cout<<pal_numberr<<std::endl;
   bool pal_arrayr= pal_array(array_1, 5);
   std::cout<<pal_arrayr<<std::endl;
   int sum_numeral_chr= sum_numeral_ch(321);
   std::cout<< sum_numeral_chr<<std::endl;
   int discharges_chr= discharges_ch(34556);
   std::cout<<discharges_chr<<std::endl;
   even_ch(2,6);
   min_ch_iz_3(3,-9,-5);
   min_ch_iz_4(3,-9,-5,-100);
   int sum_el_arrayr= sum_el_array(array_1,5);
   std::cout<< sum_el_arrayr<<std::endl;
   int max_el_arrayr= max_el_array(array_1, 0,5);
   std::cout<<max_el_arrayr<<std::endl;
   int min_el_arrayr= min_el_array(array_1, 0,5);
   std::cout<<min_el_arrayr<<std::endl;
   return 0;
}
