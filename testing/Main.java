
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

class Main {

    static class tree {

        int n;
        tree left, right;

        public tree(int n) {
            this.n = n;
        }

    }

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out, true);
        tree mytree = null;
        int data = Integer.parseInt(in.readLine());
        for (int i = 0; i < data; i++) {
            int no = Integer.parseInt(in.readLine());
            mytree=insert_node(mytree, no);
        }
        print_data(mytree, out);
        out.close();
    }

    public static tree insert_node(tree tr, int a) {
        if (tr == null) {
            tr = new tree(a);
        } else {
            if (tr.n <= a) {
                tr.right = insert_node(tr.right, a);
            } else {
                tr.left = insert_node(tr.left, a);
            }
        }
        return tr;
    }

    public static void print_data(tree tr, PrintWriter out) {
        if (tr != null) {
            print_data(tr.left, out);
            if(tr.left==null && tr.right==null)out.println(tr.n);
            print_data(tr.right, out);
        }
    }
}
