import java.io.*;

class ReadArrayInput {
	public static void main ( String args[] ) {
		FileReader reader = null;
		char arr[] = new char[200];
		try{
			reader = new FileReader("poem.txt");
			while(true) {
				int data = reader.read(arr);
				if( data == -1) break;
				System.out.print(arr);
			}
		}
		catch (FileNotFoundException fnfe) {
			System.out.println("������ �������� �ʽ��ϴ�.");
		}
		catch (IOException ioe) {
			System.out.println("������ �������� �����ϴ�.");
		}
		finally {
			try {
				reader.close();
			}
			catch (Exception e) {
				System.out.println("�ΰ��Դϴ�.");
			}
		}
	}
}