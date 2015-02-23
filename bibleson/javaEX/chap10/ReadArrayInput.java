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
			System.out.println("파일이 존재하지 않습니다.");
		}
		catch (IOException ioe) {
			System.out.println("파일을 읽을수가 없습니다.");
		}
		finally {
			try {
				reader.close();
			}
			catch (Exception e) {
				System.out.println("널값입니다.");
			}
		}
	}
}