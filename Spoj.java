
package spoj;


import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Spoj {

    public static void main(String[] arq) {

        Scanner sc = new Scanner(System.in);
        String alfabet = "abcdefghijklmnopqrstuvwxyz";
        String linia = sc.nextLine();
        Map<Character,Integer> mapa = new HashMap<>();
        for (char c : alfabet.toCharArray()){
            mapa.put(c, 0);
        }
        for (char c : linia.toCharArray()){
            mapa.put(c,mapa.get(c)+1);
        }
        int min = Collections.min(mapa.values());
        int max = Collections.max(mapa.values());
        if (min==max){
            System.out.println("PANGRAM PERFEKCYJNY");
        }
        else  if (min==0){
            System.out.println("NIE");
        }
        else {
            System.out.println("PANGRAM");
        }
    }
}

