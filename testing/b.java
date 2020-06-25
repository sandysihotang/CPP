import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
class b {

    public static void main(String[] args) throws IOException {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out=new PrintWriter(System.out,true);
        int n=Integer.parseInt(in.readLine());
        for(int i=n-1 ; i>=0 ; i--){
            for(int j = 0 ; j<n ; j++){
                out.print((j>=i?"#":" "));
            }
            out.println();
        }
        out.close();
    }
}