class StringIndexer {
	public static void main ( String args[] ) {
		String str = "�ɳ����� ���� �����ϴ� �ɳ�����" +
				"�������� �����ϴ� ��ó�� �������� ���� �ǿ������� ����";
		System.out.println(str.indexOf('��'));
		System.out.println(str.indexOf('��', 3));
		System.out.println(str.indexOf("�ɳ���"));
		System.out.println(str.indexOf("�ɳ���",3));
		System.out.println(str.lastIndexOf('��'));
		System.out.println(str.lastIndexOf('��', 20));
		System.out.println(str.lastIndexOf("�ɳ���"));
		System.out.println(str.lastIndexOf("�ɳ���",20));
	}
}