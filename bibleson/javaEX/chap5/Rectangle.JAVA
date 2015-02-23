class Rectangle {
	int width, height;
	Rectangle (int width, int height) throws Exception {
		if(width < 0 || height < 0) throw new Exception("잘못된 입력값입니다.");
		this.width = width;
		this.height = height;
	}

	int getArea() {
		return width*height;
	}
}