enum Day {
	MONDAY("��"), TUESDAY("ȭ"), WEDNESDAY("��"), THURSDAY("��"), FRIDAY("��"), 
	SATURDAY("��"), SUNDAY("��");
	final private String day;
	Day (String day) {
		this.day = day;
	}

	String value() {
		return day;
	}
}