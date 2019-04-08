/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package anagramy;

import java.util.Arrays;
import java.util.Scanner;


public class Anagramy {

    public static void main(String[] arq) {

        Scanner sc = new Scanner(System.in);
        String[] sa = sc.nextLine().split(" ");
        char[] ca = sa[0].toCharArray();
        Arrays.sort(ca, 0, sa[0].length());
        int n = Integer.parseInt(sa[1]);
        int counter = 0;
        while (n-->0){
            String linia = sc.nextLine();
            char[] la = linia.toCharArray();
            Arrays.sort(la,0,linia.length());
            if (new String(ca).compareTo(new String(la))==0){
                counter++;
            }
        }
        System.out.println(counter);
    }
}
