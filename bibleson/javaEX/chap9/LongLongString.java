class LongLongString {
	public static void main ( String args[] ) {
		StringBuilder sb = new StringBuilder();
		for( String num : args ) sb.append(num);
		String str = sb.toString();
		System.out.println(str);
	}
}