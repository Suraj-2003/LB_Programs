#include<iostream>
using namespace std;

class Pattern
{
     private:
        int iNo;

     public:
         Pattern(int iValue)
         {
             this->iNo = iValue;
         }
         void Display()
         {
             int iCnt = 0;

            for(iCnt = iNo; iCnt >= 1; iCnt--)
             {
                 cout<<iCnt<<"\t";
             }

             for(iCnt = 1; iCnt <= iNo; iCnt++)
             {
                 cout<<iCnt<<"\t";
             }

         }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number"<<endl;
    cin>>iValue;
    
    Pattern obj(iValue);

    obj.Display();

    return 0;
}