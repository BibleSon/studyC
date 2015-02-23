class Ex2_6 {
	public static void main(String args[]){
		int tot = 0;
		try {
			for(int num = 0; num < args.length; num++){
				tot = tot + Integer.parseInt(args[num]);
			}
			System.out.println(tot);
		}
		catch(java.lang.NumberFormatException e){
			System.out.println("정수값이 아닙니다.");
		}
		
	}
}