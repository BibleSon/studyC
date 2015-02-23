class Ex5_3_1 {
	String goodsCode;
	int stockNum;
	
	Ex5_3_1 (String code, int num) {
		if(num < 0) { 
			goodsCode = code;
			stockNum = 0; }
		else { 
			goodsCode = code;
			stockNum = num; }
	}
	
	void addStock(int amount) {
		stockNum += amount;
	}

	int subtractStock(int amount) {
		if (stockNum < amount)
			return 0;
		stockNum -= amount;
		return 0;
	}
}