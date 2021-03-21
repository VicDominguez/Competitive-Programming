import java.util.Scanner;

class RelationalOperator //#11172
{
    private static final int NUMBERS_PER_CASE = 2;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int numberOfCases = sc.nextInt();
        int[] numbers = new int[NUMBERS_PER_CASE];
        for(int caseIndex = 0; caseIndex < numberOfCases; caseIndex++)
        {
            for(int numberIndex = 0; numberIndex < NUMBERS_PER_CASE; numberIndex++)
            {
                numbers[numberIndex] = sc.nextInt();
            }
            if (numbers[0] > numbers[1])
                System.out.println(">");
            else if (numbers[0] < numbers[1])
                System.out.println("<");
            else
                System.out.println("=");
        }
    }
}
