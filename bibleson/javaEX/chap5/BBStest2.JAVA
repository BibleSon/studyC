class BBStest2 {
	public static void main ( String args[] ) {
		BBSItem obj;
		obj = new BBSItem("손성경","890117","청바지","수선");
		printBBSItem(obj);
	}

	static void printBBSItem( BBSItem obj ) {
		System.out.println("일련번호:"+obj.seqNo); 
		System.out.println("작성자:"+obj.writer); 
		System.out.println("일련번호:"+obj.writtenDate); 
		System.out.println("일련번호:"+obj.title); 
		System.out.println("일련번호:"+obj.content);
	}
} 