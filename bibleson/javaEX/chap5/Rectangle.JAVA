class Rectangle {
	int width, height;
	Rectangle (int width, int height) throws Exception {
		if(width < 0 || height < 0) throw new Exception("�߸��� �Է°��Դϴ�.");
		this.width = width;
		this.height = height;
	}

	int getArea() {
		return width*height;
	}
}