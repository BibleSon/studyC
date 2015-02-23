enum Day {
	MONDAY("월"), TUESDAY("화"), WEDNESDAY("수"), THURSDAY("목"), FRIDAY("금"), 
	SATURDAY("토"), SUNDAY("일");
	final private String day;
	Day (String day) {
		this.day = day;
	}

	String value() {
		return day;
	}
}