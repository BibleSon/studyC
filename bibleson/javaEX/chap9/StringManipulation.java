class StringManipulation {
	public static void main ( String args[] ) {
		StringBuilder sb = new StringBuilder("어떤 돌이 내 얼굴을 물끄러미 쳐다보는 것만");
		System.out.println(sb);
		sb.replace(17, 21, "치어다보는");
		sb.setCharAt(3, '꽃');
		System.out.println(sb);
		sb.reverse();
		System.out.println(sb);
	}
}