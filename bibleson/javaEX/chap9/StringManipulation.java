class StringManipulation {
	public static void main ( String args[] ) {
		StringBuilder sb = new StringBuilder("� ���� �� ���� �������� �Ĵٺ��� �͸�");
		System.out.println(sb);
		sb.replace(17, 21, "ġ��ٺ���");
		sb.setCharAt(3, '��');
		System.out.println(sb);
		sb.reverse();
		System.out.println(sb);
	}
}