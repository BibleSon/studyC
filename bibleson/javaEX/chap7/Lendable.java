interface Lendable {
	enum borrowBook {
		STATE_NORMAL, STATE_BORROWED
	}
	abstract void checkOut (String borrower, String date);
	abstract void checkIn();
} 