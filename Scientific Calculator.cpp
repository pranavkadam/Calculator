#include<iostream>
#include<math.h>

using namespace std;



int factorial(int n);
int exponent(int a, int b);
int main ()

{

double a;
double b;
double pi=3.14159265;

int c;

//------------x------------------------------------------------------x----------------------------------------------------x------------------x
cout<<endl;
cout<<"Scientific Calculator\n";
cout<<"1: Addition\t\t"<<"7: Sin\t\t"<<"\t\t13: Log"<<endl;
cout<<"2: Subtraction\t"<<"8: Cos\t\t"<<"\t\t14: Log with base 10"<<endl;
cout<<"3: Product\t\t"<<"9: Tan\t\t"<<endl;
cout<<"4: Division\t\t"<<"10: Inverse of Sin"<<endl;
cout<<"5: Exponent\t\t"<<"11: Inverse of Cos"<<endl;
cout<<"6: Factorial\t\t"<<"12: Inverse of Tan"<<endl;
cout<<"Enter the function that you want to perform : ";



cin>>c;

//------------x------------------------------------------------------x----------------------------------------------------x------------------x


switch(c)
{

    case 1: //addition
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;
        cout<<"The sum is"<<" "<<a+b<<endl;
        break;

//------------x------------------------------------------------------x----------------------------------------------------x------------------x

    case 2: //subtraction
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;
        cout<<"The answer is"<<" "<<a-b<<endl;
        break;

//------------x------------------------------------------------------x----------------------------------------------------x------------------x
    case 3: //product
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;
        cout<<"The product is"<<" "<<a*b<<endl;
        break;
//------------x------------------------------------------------------x----------------------------------------------------x------------------x
    case 4: //division
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;
        cout<<"The answer is"<<" "<<a/b<<endl;
        break;

//------------x------------------------------------------------------x----------------------------------------------------x------------------x

    case 5:{//er the base:";
        int a;
        int b;
        cout<<"Enter the base:"<<endl;
        cin>>a;
        cout<<"Enter the exponent:(must be positive)"<<endl;
        cin>>b;
        cout<<"The answer is"<<" "<<exponent(a,b)<<endl;
        break;
        }



//------------x------------------------------------------------------x----------------------------------------------------x------------------x

    case 6://factorial
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"The answer is"<<" "<<factorial(a)<<endl;
        break;


//------------x------------------------------------------------------x----------------------------------------------------x------------------x




    case 7: //sin
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Sin = "<<sin(a)<<endl;
        break;
        
//------------x------------------------------------------------------x----------------------------------------------------x------------------x
    case 8: //cos
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Cos = "<<cos(a)<<endl;
        break;

//------------x------------------------------------------------------x----------------------------------------------------x------------------x

    case 9: //tan
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Tan = "<<tan(a)<<endl;
        break;
//------------x------------------------------------------------------x----------------------------------------------------x------------------x

    case 10: //sin inverse
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Inverse of Sin = "<<asin(a)*180.0/pi<<endl;
        break;
//------------x------------------------------------------------------x----------------------------------------------------x------------------x
    case 11: //cos inverse
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Inverse of Cos = "<<acos(a)*180.0/pi<<endl;
        break;
//------------x------------------------------------------------------x----------------------------------------------------x------------------x
    case 12: //tan inverse
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Inverse of tan = "<<atan(a)*180.0/pi<<endl;
        break;
//------------x------------------------------------------------------x----------------------------------------------------x------------------x
    
    case 13: //log
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Log = "<<log(a)<<endl;
        break;
//------------x------------------------------------------------------x----------------------------------------------------x------------------x
    
    case 14: //log 10
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Log with base 10 = "<<log10(a)<<endl;
        break;
//------------x------------------------------------------------------x----------------------------------------------------x------------------x
    case 15:
        int a;
        cout<<"Enter the number to be squared"<<endl;
        cin>>a;
        cout<<"The answer is"<<" "<<sqrt(a)<<endl;
        
        break;
        
//------------x------------------------------------------------------x----------------------------------------------------x------------------x  

default:
cout<<"Wrong Input"<<endl;
}




}

int factorial(int n)
{
    if(n > 1)
        return n*factorial(n - 1);
    else
        return 1;
}
int exponent(int a, int b){
    int result=1;

    if(b==0){
        result=1;
    }

        else{
            for(int i=0;i<b;i++){
            result=result*a;
        }
        }
    return result;
}























