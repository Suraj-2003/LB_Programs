#include<iostream>
using namespace std;

class Digits
{
    private:
       int iNo;
    
    public:
       void Accept()
       {
           cout<<"Enter number"<<endl;
           cin>>this->iNo;
       }
       void Display()
       {
           cout<<"Entered value is: "<<this->iNo<<endl;
       }
       void DisplayEven()
       {
           int iDigit = 0;

           if(iNo < 0)
           {
               iNo = -iNo;
           }
           
           while(iNo != 0)
           {
               iDigit = iNo % 10;
               
               if((iDigit % 2) == 0)
               {
                   cout<<iDigit<<endl;
               }

               iNo = iNo / 10;
           }
       }
};

int main()
{
    Digits dobj;

    dobj.Accept();
    dobj.Display();
    dobj.DisplayEven();
    
    return 0;
}