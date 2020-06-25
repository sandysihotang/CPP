
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Map;

class abc {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out,true);
        String n = in.readLine();
        int chek_ = 0;
        Map<Integer, Boolean> ada = new HashMap<Integer, Boolean>();
        for (int i = 0; i < n.length(); i++) {
            if (n.charAt(i)=='_') {
                chek_++;
                ada.put(i,true);continue;
            }
            ada.put(i,false);
        }        
        if (chek_ > 0) {
            System.out.print((char) (n.charAt(0) - 32));
            for (int i = 1; i < n.length(); i++) {
                if (ada.get(i)==true) {
                    System.out.print((char) (n.charAt((i+1)) - 32));
                    i++;
                    continue;
                }
                System.out.print(n.charAt(i));
            }
            return;
        }
        ada.clear();
        int ckt = 0;
        for (int i = 0; i < n.length(); i++) {
            if (n.charAt(i) >= 'A' && n.charAt(i) <= 'Z') {
                ckt++;
                ada.put(i, true);continue;
            }
            ada.put(i, false);
        }
        if (ckt == 1) {
            for (int i = 0; i < n.length(); i++) {
                System.out.print((char) (ada.get(i) == true ? n.charAt(i) + 32 : n.charAt(i)));
            }
        } else {
            System.out.print((char) (n.charAt(0) + 32));
            for (int i = 1; i < n.length(); i++) {
                if (ada.get(i)) {
                    System.out.print("_" + (char) (n.charAt(i) + 32));
                    continue;
                }
                System.out.print(n.charAt(i));
            }
        }
        out.close();
    }
}
