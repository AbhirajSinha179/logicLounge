import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class gamer {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t=scan.nextInt();
		while(t-->0)
		{
			int n=scan.nextInt();
			long k=scan.nextLong();
			int l=scan.nextInt();
			int r=scan.nextInt();
			int a[]=new int[n];
			long b[]=new long[n];
			for(int i=0;i<n;i++)
			{
				a[i]=scan.nextInt();
			}
			for(int i=0;i<n;i++)
			{
				b[i]=scan.nextLong();
			}
			Set<Integer> set1=new HashSet<>();
			Set<Integer> set2=new HashSet<>();

			long s1=0,max1=0,max2=0,s2=0,p=k;
			while(p>0)
			{
				if(set1.contains(l))
				{
					break;
				}
				long c=p*b[l-1];
				max1=Math.max(s1+c,max1);
				s1+=b[l-1];
				set1.add(l);
				l=a[l-1];

				p--;
			}
			p=k;
			while(p>0)
			{
				if(set2.contains(r))
				{
					break;
				}
				long e=p*b[r-1];
				max2=Math.max(s2+e,max2);
				s2+=b[r-1];
				set2.add(r);
				r=a[r-1];
				p--;
			}

			if(max1>max2)
			{
				System.out.println("Bodya");
			}
			else if(max2>max1)
			{
				System.out.println("Sasha");
			}
			else {
				System.out.println("Draw");
			}


			       }
		    }
}
