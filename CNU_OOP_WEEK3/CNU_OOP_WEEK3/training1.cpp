#include <iostream>
class SetValue {
private:
	int x, y;	// 추상화를 위해 private으로 변수를 외부로부터 숨김.

public:
	int getx() { //변수 x의 getter
		return this->x;
	}
	void setx(int newX) { //변수 x의 setter
		this->x = newX;
	}

	int gety() { //변수 y의 getter
		return this->y;
	}

	void sety(int newY) { //변수 y의 setter
		this->y = newY;
	}
	//캡슐화를 위해 내부변수 접근을 위한 setter 와 getter 활용
};

int main() {
	SetValue obj;
	obj.setx(33);
	obj.sety(44);

	std::cout << " x 는 " << obj.getx() << " y 는 " << obj.gety() << std::endl;

	return 0;
}