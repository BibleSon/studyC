class Account1 {
	public static void main ( String args[] ) {
		try {
			Account obj;
			obj = new Account("890117", "�ռ���", 100); 
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
		System.out.println("���¹�ȣ:"+obj.accountNo);
		System.out.println("�����̸�:"+obj.ownerName);
		System.out.println("�ܾ�:"+obj.balance);
	}

}