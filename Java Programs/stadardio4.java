import java.io.*;
import java.util.*;
import java.lang.*;
import java.math.BigDecimal;
import java.math.RoundingMode;
public class Solution {

    public static void main(String[] args) {
        float n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextFloat();
        BigDecimal bd = new BigDecimal(n);
        BigDecimal roundedN = bd.setScale(2, RoundingMode.HALF_UP); 
        //double roundedNumber = Math.round(number * 100.0) / 100.0;
        System.out.print(roundedN);
    }
}
