#include<iostream>
int main()
{
int sum=0,val=50;
while(val<=100)
 {
   sum=sum+val;
   val++;
 }
std::cout<<"sum of 50 to 100 inclusive is"<<sum<<std::endl;
return 0;
}