class RectangleTest {
	public static void main ( String args[] ) {
		try {
			int area;
			Rectangle obj;
			obj = new Rectangle( -10 , 10);
			area = obj.getArea();
			System.out.println(area);
		}
		catch (Exception e){
			String msg = e.getMessage();
			System.out.println(msg);
		}
	}
}
	