package Codeforces.Contest;

import java.util.Scanner;

public class xyz {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        int tc = Sc.nextInt();
        while (tc-- > 0) {
            int n = Sc.nextInt();
            String s = Sc.next();
            char[] arr = s.toCharArray();
            char minChar = 'z' + 1;
            int minIndex = -1;
            for (int i = 0; i < n; i++) {
                if (arr[i] <= minChar) {
                    minChar = arr[i];
                    minIndex = i;
                }
            }
            StringBuilder sb = new StringBuilder(s);
            for (int i = minIndex - 1; i >= 0; i--) {
                sb.setCharAt(i + 1, arr[i]);
            }
            sb.setCharAt(0, minChar);
            System.out.println(sb.toString());
        }
    }
}