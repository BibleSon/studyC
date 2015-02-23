import geometry.common.Polygon;
import geometry.shape.Square;

class Ex8_1 {
	public static void main ( String args[] ){
		Square square = new Square ( 100, 200, 15 );
		System.out.println("Ã¹¹øÂ°ÁÂÇ¥:( "+square.getX(0)+" , "+square.getY(0)+" )");
		System.out.println("µÎ¹øÂ°ÁÂÇ¥:( "+square.getX(1)+" , "+square.getY(1)+" )");
		System.out.println("¼¼¹øÂ°ÁÂÇ¥:( "+square.getX(2)+" , "+square.getY(2)+" )");
		System.out.println("³×¹øÂ°ÁÂÇ¥:( "+square.getX(3)+" , "+square.getY(3)+" )");
	}
}