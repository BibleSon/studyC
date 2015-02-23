class Ex5_3_2 {
	public static void main( String args[] ){
		Ex5_3_1 obj;
		obj = new Ex5_3_1("12345",-50);
		System.out.println("惑前内靛:"+obj.goodsCode);
		System.out.println("惑前内靛:"+obj.stockNum);
		obj.addStock(1000);
		System.out.println("惑前内靛:"+obj.goodsCode);
		System.out.println("惑前内靛:"+obj.stockNum);
	}
}