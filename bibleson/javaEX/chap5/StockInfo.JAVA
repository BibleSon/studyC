class StockInfo {
	String stockCode;
	String stockName;
	String maker;
	int standardPrice;
	int discountRate;
	StockInfo (String stockCode, String stockName, String maker, int standardPrice, int discountRate){
		this.stockCode = stockCode;
		this.stockName = stockName;
		this.maker = maker;
		this.standardPrice = standardPrice;
		this.discountRate = discountRate;
	}
	StockInfo (String stockCode, String stockName, String maker, int standardPrice){
		this.stockCode = stockCode;
		this.stockName = stockName;
		this.maker = maker;
		this.standardPrice = standardPrice;
	}

	void changeRate (int discountRate){
		this.discountRate = discountRate;
	}

	double sellPrice() {
		return standardPrice - (discountRate*standardPrice*0.01);
	}
}