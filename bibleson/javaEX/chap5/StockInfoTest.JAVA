class StockInfoTest{
	public static void main ( String args[] ){
		StockInfo obj;
		obj = new StockInfo("890117","�ռ���","SSK",1000,10);
		obj.changeRate(20);
		printStockInfo(obj);
	}

	static void printStockInfo (StockInfo obj){
		System.out.println("��ǰ�ڵ�"+obj.stockCode);
		System.out.println("��ǰ��"+obj.stockName);
		System.out.println("������"+obj.maker);
		System.out.println("ǥ�شܰ�"+obj.standardPrice);
		System.out.println("������"+obj.discountRate);
		System.out.println("�ǸŰ�"+obj.sellPrice());
	}
}