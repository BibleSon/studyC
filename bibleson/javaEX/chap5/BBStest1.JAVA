class BBStest1 {
	public static void main ( String args[] ) {
		BBSItem obj1, obj2, obj3;
		obj1 = new BBSItem("�ռ���","890117","û����","����");
		obj2 = new BBSItem("�տ���","911101","�����","��Ź");
		obj3 = new BBSItem("�տ���","611228","�ռ���","���");
		printBBSItem(obj1);
		printBBSItem(obj2);
		printBBSItem(obj3);
	}

	static void printBBSItem( BBSItem obj ) {
		System.out.println("�Ϸù�ȣ:"+obj.seqNumber()); 
		System.out.println("�ۼ���:"+obj.writer); 
		System.out.println("�Ϸù�ȣ:"+obj.writtenDate); 
		System.out.println("�Ϸù�ȣ:"+obj.title); 
		System.out.println("�Ϸù�ȣ:"+obj.content);
	}
} 