class Ex6_1 {
	public static void main ( String args[] ){
		CheckingAccount obj = new CheckingAccount("890117","손성경",0,"0117");
		obj.deposit( 100000 );
	try {
		int paidAmount = obj.pay("0117",47000);
		System.out.println("지불액:"+paidAmount);
		System.out.println("잔액:"+obj.balance);
		}
	catch ( Exception e ) {
		String msg = e.getMessage();
		System.out.println(msg);
		}
	}
}