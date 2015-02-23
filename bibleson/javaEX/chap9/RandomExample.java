import java.util.*;

class RandomExample {
	public static void main ( String args[] ) {
		Random random = new Random();
		int arr[] = new int[100];
		int cnt, front=0, back=0 ;
		
		for(cnt = 0; cnt < 100; cnt++) {
			arr[cnt] = random.nextInt(2);
			System.out.println(arr[cnt]);
		}

		for(cnt = 0; cnt < 100; cnt++) {
			if(arr[cnt] == 0) { front++; }
			else if(arr[cnt] ==1) { back++; }
		}

		System.out.println("¾Õ¸é:"+front);
		System.out.println("µÞ¸é:"+back);
	}
}
				
							