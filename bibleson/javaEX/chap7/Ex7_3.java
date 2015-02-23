class Ex7_3 {
	public static void main ( String args[] ) {
		printDay(Day.MONDAY);
		printDay(Day.TUESDAY);
		printDay(Day.WEDNESDAY);
	}

	static void printDay ( Day day ){
		System.out.println( day.value() );
	}
}