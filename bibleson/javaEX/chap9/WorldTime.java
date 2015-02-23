import java.util.*;
import java.text.*;

class WorldTime {
	public static void main ( String args[] ) {
		GregorianCalendar calendar = new GregorianCalendar();
		SimpleDateFormat dateFormat1 = new SimpleDateFormat("yyyy/MM/dd (E) aahh:mm");
		dateFormat1.setTimeZone(TimeZone.getTimeZone("America/New_York"));
		String str1 = dateFormat1.format(calendar.getTime());
		System.out.println("´º¿å"+str1);
		SimpleDateFormat dateFormat2 = new SimpleDateFormat("yyyy/MM/dd (E) aahh:mm");
		dateFormat2.setTimeZone(TimeZone.getTimeZone("Asia/Hong_Kong"));
		String str2 = dateFormat2.format(calendar.getTime()); 
		System.out.println("È«Äá"+str2);
		SimpleDateFormat dateFormat3 = new SimpleDateFormat("yyyy/MM/dd (E) aahh:mm");
		dateFormat3.setTimeZone(TimeZone.getTimeZone("Europe/Paris"));
		String str3 = dateFormat3.format(calendar.getTime()); 
		System.out.println("ÆÄ¸®"+str3);
	}

}