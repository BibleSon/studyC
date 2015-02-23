class Account {
	String accountNo;
	String ownerName;
	int balance;
	Account ( String accountNo, String ownerName, int balance ) throws Exception {
		if(balance < 0) throw new Exception("��ü�� ������ �� �����ϴ�.");
		this.accountNo = accountNo;
		this.ownerName = ownerName;
		this.balance = balance;
	}

	void deposit (int amount) {
		balance += amount;
	}

	int withdrow (int amount) throws Exception {
		if(balance < amount) throw new Exception("�ܾ��� �����մϴ�.");
		balance -= amount;
		return amount;
	}
}	