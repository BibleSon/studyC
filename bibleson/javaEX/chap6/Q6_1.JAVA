class Q6_1 {
	public static void main ( String args[] ) {
		String arr[] = {"물", "흙", "바람", "불"};
		MusicCDInfo obj = new MusicCDInfo( "890117", "킹스맨", "손성경", arr);
		System.out.println("관리번호:"+obj.registerNo);
		System.out.println("타이틀:"+obj.title);
		System.out.println("아티스트:"+obj.artist);
		System.out.println("곡명:"+obj.music[0]);
	}
}
		