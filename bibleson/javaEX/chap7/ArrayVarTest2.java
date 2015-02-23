class ArrayVarTest2 {
	public static void main ( String args[] ) {
		int arr[] = { 1, 2, 3, 4, 5 };
		printArray(arr);
		arr = null;
		if(arr == null) { System.out.println("배열에 아무것도 없습니다."); return; }
		printArray(arr);
	}

	static void printArray ( int arr[] ) {
		for (int num : arr)
			System.out.println(num);
	}
}