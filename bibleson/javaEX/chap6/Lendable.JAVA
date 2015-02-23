interface Lendable {
	abstract void checkOut(String borrower, String date); // throws Exception;
	abstract void checkIn();
}