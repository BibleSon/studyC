import java.util.*;
import java.text.*;

class After100Days {
	public static void main ( String args[] ) {
		Calendar calendar = new GregorianCalendar();
		calendar.add(Calendar.DATE, 100);
		SimpleDateFormat dateFormat = new SimpleDateFormat("100일 뒤의 날짜는 yyyy년 MM월 dd일 입니다.");
		dateFormat.setTimeZone(TimeZone.getTimeZone("Asia/Seoul"));
		String str = dateFormat.format(calendar.getTime());
		System.out.println(str); 
	}
}