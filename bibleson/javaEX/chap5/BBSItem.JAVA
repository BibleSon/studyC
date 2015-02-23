class BBSItem {
	static int seqNo = 0;			//일련번호 필드
	String writer;			//작성자 필드
	String writtenDate;		//작성일자 필드
	String title;			//제목필드
	String content;			//내용필드
	BBSItem (String writer, String writtenDate, String title, String content) {
		this.writer = writer;			
		this.writtenDate = writtenDate;		
		this.title = title;			
		this.content = content;	
	}

	int seqNumber (){
		seqNo = seqNo + 1;
		return seqNo;
		
	} 
}