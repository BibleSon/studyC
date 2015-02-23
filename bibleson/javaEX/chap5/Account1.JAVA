class Account1 {
	public static void main ( String args[] ) {
		try {
			Account obj;
			obj = new Account("890117", "손성경", 100); 
			obj.deposit(1000);
			obj.withdrow(200);
			printMessage(obj);
		}
		catch (Exception e) { 
			String msg = e.getMessage();
			System.out.println(msg);
		}
	}

	static void printMessage (Account obj) {
		System.out.println("계좌번호:"+obj.accountNo);
		System.out.println("계좌이름:"+obj.ownerName);
		System.out.println("잔액:"+obj.balance);
	}

}