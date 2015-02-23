import java.util.*;
import java.text.*;

class After100Days {
	public static void main ( String args[] ) {
		Calendar calendar = new GregorianCalendar();
		calendar.add(Calendar.DATE, 100);
		SimpleDateFormat dateFormat = new SimpleDateFormat("100�� ���� ��¥�� yyyy�� MM�� dd�� �Դϴ�.");
		dateFormat.setTimeZone(TimeZone.getTimeZone("Asia/Seoul"));
		String str = dateFormat.format(calendar.getTime());
		System.out.println(str); 
	}
}