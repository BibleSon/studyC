import java.util.*;

class Token {
	public static void main ( String args[] ){
		StringTokenizer st = new StringTokenizer("°í½¿µµÄ¡, ¾Þ¹«»õ | Åä³¢",",|");
		while(st.hasMoreTokens()) {
			String str = st.nextToken();
			System.out.println(str);
		}
	}
}