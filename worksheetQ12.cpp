#include<iostream>
using namespace std;
double calculateQuotient(double n1,double n2,double* answer);
double calculateQuotient(double n1,double n2,double* answer);
int main(){
    double num1,num2,quoetient;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;

    calculateQuotient(num1,num2,&quoetient);
    cout<<"the quoetient is :"<<quoetient; 
}
double calculateQuotient(double n1,double n2,double* answer)
{ *answer =n1/n2;}
