
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;


class a {

    public static void main(String[] args) throws IOException {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out=new PrintWriter(System.out,true);
        int n=Integer.parseInt(in.readLine());
        long sum=0;
        for(int i=0 ; i<n ; i++){
            long tr=Long.parseLong(in.readLine());
            sum+=tr;
        }
        out.println(sum);
        out.close();
    }
}
