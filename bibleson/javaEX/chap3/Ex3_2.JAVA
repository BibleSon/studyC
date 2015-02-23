class Ex3_2 {
	public static void main(String args[]){
		double num1 = 12.375;
		long num2 = Double.doubleToRawLongBits(num1);
		String str = Long.toBinaryString(num2);
		System.out.println(str);
		
		num1 = -12.375;
		num2 = Double.doubleToRawLongBits(num1);
		str = Long.toBinaryString(num2);	
		System.out.println(str);
	}
}