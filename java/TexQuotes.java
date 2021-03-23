import java.util.Scanner;

public class TexQuotes //#272
{


    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        boolean first = true;
        while(sc.hasNextLine())
        {
            StringBuilder actualLine = new StringBuilder(sc.nextLine());
            StringBuilder result = new StringBuilder();
            for (int index = 0; index < actualLine.length(); index++)
            {
                //System.out.println(actualLine.charAt(index));
                if(actualLine.charAt(index) == '\"')
                {
                    char toAppend = (first?'`':'\'');
                    result.append(toAppend);
                    result.append(toAppend);
                    first = !first;
                }
                else
                    result.append(actualLine.charAt(index));
            }
            System.out.println(result);
        }
    }
}
