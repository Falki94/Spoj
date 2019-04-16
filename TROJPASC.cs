using System;
using System.Numerics;
namespace Refaktoring
{
    public class Program
    {   
        private static BigInteger Newton(BigInteger n, BigInteger k)
        {
            BigInteger wynik = 1;
            BigInteger i;
            if (k == 0 && n == k)
            {
                return wynik;
            }
            if (k > (n - k))
            {
                k = n - k;
            }
            for (i = 1; i <= k; i++)
            {
                wynik *= (n - i + 1);
                wynik /= i;
            }
            return wynik;

        }
        public static void Main(String[] argv)
        {
            int D = int.Parse(Console.ReadLine());
            while (D-- > 0)
            {
                string line = Console.ReadLine();
                string[] sa = line.Split();
                BigInteger A = BigInteger.Parse(sa[0]);
                if (A == 0)
                {
                    Console.Write('1');
                }
                for (BigInteger i = 0; i <= A; i++)
                {
                    Console.Write(Newton(A, i) + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
