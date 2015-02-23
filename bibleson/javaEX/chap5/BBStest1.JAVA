class BBStest1 {
	public static void main ( String args[] ) {
		BBSItem obj1, obj2, obj3;
		obj1 = new BBSItem("손성경","890117","청바지","수선");
		obj2 = new BBSItem("손예은","911101","면바지","세탁");
		obj3 = new BBSItem("손원석","611228","손수건","재봉");
		printBBSItem(obj1);
		printBBSItem(obj2);
		printBBSItem(obj3);
	}

	static void printBBSItem( BBSItem obj ) {
		System.out.println("일련번호:"+obj.seqNumber()); 
		System.out.println("작성자:"+obj.writer); 
		System.out.println("일련번호:"+obj.writtenDate); 
		System.out.println("일련번호:"+obj.title); 
		System.out.println("일련번호:"+obj.content);
	}
} 