#include "Customer2.h"
#include <iostream>
using namespace std;

Customer2::Customer2(const string& name, const int& number)
	:m_name(name), m_number(number), items(make_unique<unique_ptr<Product>[]>(m_number))
{
}

Customer2::~Customer2()
{
}

void Customer2::buy(unique_ptr<Product> item)
{
	if (m_count < m_number) {
		items[m_count++] = move(item); //unique포인터는 그대로 대입할수 x -> r-value로 만들어주는 move()로 이동시킴
	}
}

string Customer2::getName() const
{
	return m_name;
}

int Customer2::getCount() const
{
	return m_count;
}

void Customer2::showlist() const
{
	cout << "고객이름 : " << m_name << endl;
	cout << "구매개수 : " << m_count << endl;
	int price = 0; //총구매한 금액 변수 초기화
	for (size_t i = 0; i < m_count; i++) {
		items[i]->show(); //부모타입 호출-> 가리키고 있는 객체 호출
		price += items[i]->getPrice(); //가격정보 누적
	}
	cout << "총 구매 금액 : " << price << endl; //가격정보 총액 -> 판매가격 총액
}

//		[0]	0x00e7120d {Project81.exe!TV::getPrice(void)const }	void *
//		[1]	0x00e7125d {Project81.exe!TV::show(void)const }	void *
