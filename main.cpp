#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int digits[17], lenght, sum1, sum2, sumf;
char card[20];
void include_card()
{ int i;

  cin>>card;
  for(i=0; i<strlen(card); i++)
    {digits[i]=card[i]-'0';
     lenght++;}
}
int lenght_check()
{ if(lenght<12 && lenght>15)
    return 0;
  return 1;
}
int first_number()
{
 if((digits[0]==3 && digits[1]==7) || (digits[1]==4) || (digits[1]==5) || (digits[1]==6))
    return 1;
 return 0;
}
void step1()
{ int i;
  for(i=1; i<lenght; i+=2)
  { digits[i]=digits[i]*2;
    if(digits[i]>9)
        digits[i]=digits[i]/10+digits[i]%10;
  }
}
void step2()
{
 int i;
 for(i=1; i<lenght; i+=2)
    sum1=sum1+digits[i];

}
void step3()
{
 int i;
 for(i=0; i<lenght; i+=2)
    sum2=sum2+digits[i];

}
int step4()
{   step1();step2();step3();
    sumf=sum1+sum2;
    if(sumf%10!=0)
        return 0;
    return 1;
}
int main()
{int ok=0;
    include_card();
    if(lenght_check())
        if(step4())
           {cout<<card<<" is valid";
            ok=1;}
    if(ok==0)
        cout<<card<<" is invalid";

    return 0;
}
