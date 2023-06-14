import java.lang.*;
import java.util.*;

class Pattern
{
    private int iNo;

    public Pattern(int iValue)
    {
        this.iNo = iValue;
    }
    public void Display()
    {
        int iCnt = 0;

        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.print(iCnt+"\t");
        }
    }
}

class Program80
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
       
        System.out.println("Enter numebr");
        iValue = sobj.nextInt();
        
        Pattern obj = new Pattern(iValue);
        obj.Display();
    }
}