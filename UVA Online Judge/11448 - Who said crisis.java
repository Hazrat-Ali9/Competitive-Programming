import java.math.BigInteger;
import java.util.Scanner;
class Main
{
    private static Scanner sc;
    public static void main(String[] args)
    {
        BigInteger p,q;
        int n;
        sc = new Scanner(System.in);
        n=sc.nextInt();
        while(n>0)
        {
            p = sc.nextBigInteger();
            q = sc.nextBigInteger();
            System.out.println(p.subtract(q));
            n--;
        }
    }
}
// Who Said crisis java