import java.util.Arrays;
import java.util.Scanner;

public class HorrorDash //#11799
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int numberOfCases = sc.nextInt();
        sc.nextLine();
        for (int indexCase = 0; indexCase < numberOfCases; indexCase++)
        {
            String[] temp = sc.nextLine().split(" ");
            int[] kids = new int[temp.length];
            for(int index = 0; index < temp.length; index++)
                kids[index] = Integer.parseInt(temp[index]);
            Arrays.sort(kids);
            System.out.printf("Case %d: %d\n", indexCase+1,kids[kids.length-1]);
        }
    }
}
