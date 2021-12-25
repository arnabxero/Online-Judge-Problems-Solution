import java.util.*;

public class Main {
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n, i, j;
		
		n = (sc.nextInt())+1;
		
		String[] str = new String[n];
		String[] str2 = new String[n];
		int cnt = 1;
		
		for(i=0; i<n;  i++)
			str[i] = sc.nextLine();
		
		int c = 0;
		
		/////////////////////////////////////////////
		for(i=1; i<n; i++)
		{
				for(j=1; j<i; j++)
				{				
					if((str[i].equals(str[j])))
					{
						c++;
						break;
					}
				}
		}
		System.out.println(c);
		////////////////////////////////////////////////
		
		for(i=1; i<n; i++)
		{
				for(j=1; j<i; j++)
				{				
					if((str[i].equals(str[j])))
					{
						System.out.println(str[i]);
						break;
					}
				}
		}
	}
}
