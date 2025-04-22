import java.math.BigInteger;
import java.util.Scanner;
class Main
{
    private static Scanner sc;
    public static void main(String[] args)
    {
        BigInteger p,q;
        sc = new Scanner(System.in);
        while(sc.hasNext())
        {
            p = sc.nextBigInteger();
            q = sc.nextBigInteger();
            System.out.println(p.multiply(q));
        }
    }
}
// Product java
