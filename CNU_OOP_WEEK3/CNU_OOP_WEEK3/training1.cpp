#include <iostream>
class SetValue {
private:
	int x, y;	// �߻�ȭ�� ���� private���� ������ �ܺηκ��� ����.

public:
	int getx() { //���� x�� getter
		return this->x;
	}
	void setx(int newX) { //���� x�� setter
		this->x = newX;
	}

	int gety() { //���� y�� getter
		return this->y;
	}

	void sety(int newY) { //���� y�� setter
		this->y = newY;
	}
	//ĸ��ȭ�� ���� ���κ��� ������ ���� setter �� getter Ȱ��
};

int main() {
	SetValue obj;
	obj.setx(33);
	obj.sety(44);

	std::cout << " x �� " << obj.getx() << " y �� " << obj.gety() << std::endl;

	return 0;
}