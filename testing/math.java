import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
class Main{
        public static long MOD=(long)1e6+7;
	public static void main(String[]args) throws IOException{
            BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
            int n=Integer.parseInt(in.readLine());
                BigInteger re=getSum(n);
                System.out.println(re.add(new BigInteger("2")).divide(new BigInteger("3")));
            
	}
	private static BigInteger getSum(int re){
            int i=1;
            if(re==0){
                return new BigInteger("1");
            }
            BigInteger bigInteger=new BigInteger("4");
            while(i+i<=re){
                bigInteger=bigInteger.pow(2).mod(new BigInteger(Long.toString(MOD)));
                i+=i;
            }
            if(re>i){
                return bigInteger.multiply(getSum((re-i)));
            }
            return bigInteger;
        }
}