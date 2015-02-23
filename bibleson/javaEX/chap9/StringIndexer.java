class StringIndexer {
	public static void main ( String args[] ) {
		String str = "采唱公绰 力啊 积阿窍绰 采唱公甫" +
				"凯缴栏肺 积阿窍绰 巴贸烦 凯缴栏肺 采阑 乔况啊瘤绊 脊家";
		System.out.println(str.indexOf('采'));
		System.out.println(str.indexOf('采', 3));
		System.out.println(str.indexOf("采唱公"));
		System.out.println(str.indexOf("采唱公",3));
		System.out.println(str.lastIndexOf('采'));
		System.out.println(str.lastIndexOf('采', 20));
		System.out.println(str.lastIndexOf("采唱公"));
		System.out.println(str.lastIndexOf("采唱公",20));
	}
}