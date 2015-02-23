class SeparateVolume implements Lendable {
	String requestNo;
	String bookTitle;
	String writer;
	String borrower;
	String checkOutDate;
	borrowBook stateBook;
	SeparateVolume ( String requestNo, String bookTitle, String writer ) {
		this.requestNo = requestNo;
		this.bookTitle = bookTitle;
		this.writer = writer;
	}

	public void checkOut( String borrower, String date ){
		if(stateBook != borrowBook.STATE_NORMAL) return;
		this.borrower = borrower;
		this.checkOutDate = date;
		this.stateBook = borrowBook.STATE_BORROWED;
		System.out.println("*"+bookTitle+" 이(가) 대출되었습니다.");
		System.out.println("대출인:"+borrower);
		System.out.println("대출일:"+date+"\n");
	}

	public void checkIn(){
		this.borrower = null;
		this.checkOutDate = null;
		this.stateBook = borrowBook.STATE_NORMAL;
		System.out.println("*"+bookTitle+" 이(가) 반납되었습니다.\n");
	}
}