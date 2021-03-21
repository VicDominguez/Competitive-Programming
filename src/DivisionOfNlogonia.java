import java.util.Scanner;

public class DivisionOfNlogonia //#11498
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int numberOfCases;
        int[] divisa = new int[2];
        int[] actualPoint = new int[2];
        while ((numberOfCases = sc.nextInt()) != 0)
        {
            divisa[0] = sc.nextInt();
            divisa[1] = sc.nextInt();
            for (int caseIndex = 0; caseIndex < numberOfCases; caseIndex++)
            {
                actualPoint[0] = sc.nextInt();
                actualPoint[1] = sc.nextInt();
                if (actualPoint[0] == divisa[0] || actualPoint[1] == divisa[1])
                    System.out.println("divisa");
                else
                {
                    if (actualPoint[1] > divisa[1])
                        System.out.print("N");
                    else
                        System.out.print("S");
                    if (actualPoint[0] > divisa[0])
                        System.out.println("E");
                    else
                        System.out.println("O");
                }
            }
        }
    }
}
