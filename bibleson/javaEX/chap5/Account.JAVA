class Account {
	String accountNo;
	String ownerName;
	int balance;
	Account ( String accountNo, String ownerName, int balance ) throws Exception {
		if(balance < 0) throw new Exception("객체를 생성할 수 없습니다.");
		this.accountNo = accountNo;
		this.ownerName = ownerName;
		this.balance = balance;
	}

	void deposit (int amount) {
		balance += amount;
	}

	int withdrow (int amount) throws Exception {
		if(balance < amount) throw new Exception("잔액이 부족합니다.");
		balance -= amount;
		return amount;
	}
}	