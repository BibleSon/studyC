class MusicCDInfo extends CDInfo {
	String artist;
	String music[];
	MusicCDInfo( String registerNo, String title, String artist, String music[] ){
		super( registerNo, title );
		this.artist = artist;
		this.music = music;
	}
}