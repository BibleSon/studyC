class Ex2_5 {
	public static void main(String args[]){
		int tot = 0;
		for(int num = 0; num < args.length; num++){
			tot = tot + Integer.parseInt(args[num]);
		}
		System.out.println(tot);
		
	}
}