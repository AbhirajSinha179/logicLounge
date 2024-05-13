import java.util.Scanner;

public class D {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t=scan.nextInt();
        while(t-->0)
        {
            String str=scan.next();
            int cnt=0;
            int k=0;
            for(int i=0;i<str.length()-1;i++)
            {

                if(str.charAt(i)=='1'&&str.charAt(i+1)=='0')
                {
                    cnt++;
                }
                if(str.charAt(i)=='0'&&str.charAt(i+1)=='1'&&k==1)
                {
                    cnt++;
                }
                if(str.charAt(i)=='0'&&str.charAt(i+1)=='1')
                {
                    k=1;
                }
            }
            System.out.println(cnt+1);
        }
    }
}
