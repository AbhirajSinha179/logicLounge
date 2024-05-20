import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t=scan.nextInt();
        while(t-->0)
        {
            int a=scan.nextInt();
            int b=scan.nextInt();
            int c=scan.nextInt();
            int d=scan.nextInt();
            int min=Math.min(a,b);
            int max=Math.max(a,b);
            if(((min<c)&(c<max))&&((d<min)||(d>max)))
            {
                System.out.println("YES");
            }
            else if(((min<d)&(d<max))&&((c<min)||(c>max)))
            {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
    }
}
