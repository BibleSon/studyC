class StockInfoTest{
	public static void main ( String args[] ){
		StockInfo obj;
		obj = new StockInfo("890117","손성경","SSK",1000,10);
		obj.changeRate(20);
		printStockInfo(obj);
	}

	static void printStockInfo (StockInfo obj){
		System.out.println("상품코드"+obj.stockCode);
		System.out.println("상품명"+obj.stockName);
		System.out.println("제조사"+obj.maker);
		System.out.println("표준단가"+obj.standardPrice);
		System.out.println("할인율"+obj.discountRate);
		System.out.println("판매가"+obj.sellPrice());
	}
}