import geometry.common.Polygon;
import geometry.shape.Square;

class Ex8_1 {
	public static void main ( String args[] ){
		Square square = new Square ( 100, 200, 15 );
		System.out.println("ù��°��ǥ:( "+square.getX(0)+" , "+square.getY(0)+" )");
		System.out.println("�ι�°��ǥ:( "+square.getX(1)+" , "+square.getY(1)+" )");
		System.out.println("����°��ǥ:( "+square.getX(2)+" , "+square.getY(2)+" )");
		System.out.println("�׹�°��ǥ:( "+square.getX(3)+" , "+square.getY(3)+" )");
	}
}