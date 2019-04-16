using System;
using System.Collections.Generic;
using System.Linq;

namespace Refaktoring
{
    public class Program
    {
        public static void Main(String[] argv)
        {
            int D = int.Parse(Console.ReadLine());
            int min = 1000000000;
            Dictionary<string, int> mapa = new Dictionary<string, int>();
            while (D-- > 0)
            {
                string line = Console.ReadLine();
                string[] sa = line.Split(' ', ':');
                string imie, nazwisko, minuty, sekundy;
                imie = sa[0];
                nazwisko = sa[1];
                minuty = sa[2];
                sekundy = sa[3];
                int x = int.Parse(minuty) * 60;
                int czas = x + int.Parse(sekundy);
                if (czas <= min)
                {
                    min = czas;
                    mapa.Add(imie + " " + nazwisko, czas);
                }
            }
            foreach (string s in mapa.Where(x => x.Value == min).Select(x => x.Key))
            {
                Console.WriteLine(s);
            }
        }
    }
}
