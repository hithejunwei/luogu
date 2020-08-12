package exception;

import java.math.BigInteger;
import java.util.Scanner;

public class bignum {
	
	public static void Big_Factor(Integer n)
	{
		BigInteger s=BigInteger.valueOf(0);
		BigInteger sm=BigInteger.valueOf(1);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				sm=sm.multiply(BigInteger.valueOf(j));
			}
			s=s.add(sm);
			sm=BigInteger.valueOf(1);
		}
		System.out.println(s);
		}
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		Integer a=s.nextInt();
		Big_Factor(a);
		s.close();
	}
}



