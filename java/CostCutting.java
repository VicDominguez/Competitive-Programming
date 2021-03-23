import java.util.Arrays;
import java.util.Scanner;

class CostCutting //#11727
{
    private static final int EMPLOYEES_PER_CASE = 3;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int numberOfCases = sc.nextInt();
        int[] salaries = new int[EMPLOYEES_PER_CASE];
        for(int caseIndex = 0; caseIndex < numberOfCases; caseIndex++)
        {
            for(int employeeIndex = 0; employeeIndex < EMPLOYEES_PER_CASE; employeeIndex++)
            {
                salaries[employeeIndex] = sc.nextInt();
            }
            Arrays.sort(salaries);
            System.out.printf("Case %d: %d\n", caseIndex+1, salaries[1]);
        }
    }
}
