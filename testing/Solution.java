
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'smallestString' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts LONG_INTEGER weight as parameter.
     */
    static BigInteger[] ANS = new BigInteger[27];

    private static void generate(){
        ANS[0]= new BigInteger("1");
        for(int i=1 ; i< 26 ; i++){
            ANS[i]=new BigInteger(Integer.toString(i+1)).multiply(ANS[i-1]).add(new BigInteger(Integer.toString(i+1)));
        }
    }

    public static String smallestString(long weight) {
        generate();
        long asdsa=ANS[17].longValue();
        System.out.println(ANS[17]);
        System.out.println(asdsa);
        ArrayList<Character>as=new ArrayList<>();
        BigInteger asd=new BigInteger(Long.toString(weight));
        for(int i=25; i>=0 ; i++){
            while(asd.toString().compareTo(ANS[i].toString())<0){
                System.out.println(ANS[i]);
                asd.subtract(ANS[i]);
                as.add((char)('A'+i));
            }
        }
        
        
        
        
        
        
        
        return null;
    }

}

public class Solution {

    public static void main(String[] args) throws IOException {
        Scanner in=new Scanner(System.in);
        long weight=in.nextLong();
        String result = Result.smallestString(weight);

    }
}
