class Ex2_4 {
	public static void main(String args[]) {
		int arr[] = { 435, 88, 67, 32, 88, -1, 6, 12, 7, 8, 45, 11 };
		for(int num = 0 ; num < arr.length ; num++){
			if(arr[num] == -1) break;
			System.out.println(arr[num]);
		}
	System.out.println("Done.");
	}
}