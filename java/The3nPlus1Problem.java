import java.io.IOException;
import java.util.Scanner;

class The3nPlus1Problem //#100
{

    static int MAX_SIZE = 1000000; //based on https://www.mathblog.dk/project-euler-14/ post
    static int[] cache = new int[MAX_SIZE];

    static int doAlgorithm(long n)
    {
        if(n < MAX_SIZE && cache[(int)n] != 0)
            return cache[(int) n];

        //if n is even, continue with n/2. If n is odd, continue with 3n+1
        int result = 1 + doAlgorithm((n%2==0) ? n/2: (3*n+1));

        if (n < MAX_SIZE)
            cache[(int) n] = result;

        return result;
    }

    static int solver(int min, int max)
    {
        int maxInterval=0;
        for (int index = min; index <= max; index++)
        {
            maxInterval = Math.max(maxInterval,doAlgorithm(index));
        }
        return maxInterval;
    }


    public static void main(String[] args)
    {
        //put 2^n values into cache array because they are trivial to compute
        //example: f(0) is 1, f(2) is 2, f(4) is 3, f(8) is 4...

        for(int index = 0; (int)Math.pow(2,index) < MAX_SIZE; index++)
        {
            cache[(int)Math.pow(2,index)] = index+1;
        }

        //read input and compute
        Scanner sc = new Scanner(System.in);
        int a,b, min, max;
        while (sc.hasNextInt())
        {
            a = sc.nextInt();
            b = sc.nextInt();

            min = Math.min(a,b);
            max = Math.max(a,b);

            int result = solver(min,max);
            System.out.printf("%d %d %d\n",a,b,result);
        }

    }
}