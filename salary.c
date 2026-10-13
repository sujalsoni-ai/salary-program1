#include<stdio.h>
#include<conio.h>
int main()
{
    int emp_no;
    float basic, hra, da, gross, it, net;
    printf("enter the employee number");
    scanf("%d", &emp_no);
    printf("Enter the basic salary");
    scanf("%f", &basic);
    hra=(basic*12)/100;
    da=(basic*95)/100;
    gross=hra+da+basic;
    if(basic<=10000)
{
    it=gross*10/100;
}
else if(basic <=30000)
{
    it=gross*20/100;
}
else if (basic<=50000)
{
    it=gross*25/100;
}
else 
{
    it=gross*30/100;
}
net=gross+it;
printf("emp_no=%d, basic=%f, hra=%f, da=%f, gross=%f, it=%f, net=%f", emp_no, basic, hra, da, gross, it, net);
    return 0;
}