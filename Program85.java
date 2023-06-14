import java.lang.*;
import java.util.*;

class Pattern
{
    private int iRow, iCol;

    public Pattern(int iValue1, int iValue2)
    {
        this.iRow = iValue1;
        this.iCol = iValue2;
    }
    public void DisplayPattern()
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j<= iCol; j++)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }
        
    }
}
class Program85
{
    public static void main(String agr[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;
        
        System.out.println("Enter number of rows");
        iValue1 = sobj.nextInt();
        
        System.out.println("Enter number of columns");
        iValue2 = sobj.nextInt();

        Pattern obj = new Pattern(iValue1, iValue2);

        obj.DisplayPattern();

    }
}