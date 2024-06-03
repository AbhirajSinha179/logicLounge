import java.util.Scanner;

public class colorring {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t=scan.nextInt();
        while(t-->0)
        {
            int a=scan.nextInt();
            int ans[]=new int[32];
            for(int i=29;i>=0;i--)
            {
                int c=1<<i;
                if((a&c)==c)
                {
                    ans[i]=1;
                }
            }
            int i=0;
            while(i<=31)
            {
                if(ans[i]==0)
                {
                    i++;
                    continue;
                }
                int j=i+1;
                
                    while(j<=31&&ans[j]==1)
                    {
                        ans[j]=0;
                        j++;
                    }
                 if(j!=i+1&&j<=31)
                 {   
               
                    ans[j]=1;
                    ans[i]=-1;
                    i=j;
                 }  
                 else {
                    i++;
                 }
            }
            int end=31;
            for(int j=31;j>=0;j--)
            {
                if(ans[j]!=0)
                {
                    end=j;
                    break;
                }
            }
            System.out.println(end+1);
            for(int j=0;j<=end;j++)
            {
                System.out.print(ans[j]+" ");
            }
            System.out.println();
        }
    }
}