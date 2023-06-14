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
            cout<<"Your Entered value is: "<<this->iNo<<endl; 
        }
        int Reverse()
        {
            int iDigit = 0;
            int iRev = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iRev = iRev * 10 + iDigit;
                iNo = iNo / 10;
            }
            return iRev;
        }
};

int main()
{
    int iRet = 0;
    Digits dobj;

    dobj.Accept();
    dobj.Display();
    
    iRet = dobj.Reverse();
    cout<<"Digits are in reverse order: "<<iRet;
}