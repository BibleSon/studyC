import java.util.*;

class Token {
	public static void main ( String args[] ){
		StringTokenizer st = new StringTokenizer("����ġ, �޹��� | �䳢",",|");
		while(st.hasMoreTokens()) {
			String str = st.nextToken();
			System.out.println(str);
		}
	}
}