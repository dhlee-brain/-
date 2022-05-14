#include "DocWriter.h"
#include <iostream>
#include <fstream>

using namespace std;

DocWriter::DocWriter()
	:DocWriter("noFileName", "noContent")
{
}

DocWriter::~DocWriter()
{
	cout << "DocWriter 소멸자" << endl;
}

DocWriter::DocWriter(const string& fileName, const string& content)
	:fileName(fileName), content(content)
{
	cout << "DocWriter 생성자" << endl;
}

void DocWriter::setFileName(const string& fileName)
{
	this->fileName = fileName;
}

void DocWriter::setContent(const string& content)
{
	this->content = content;
}

void DocWriter::write()
{
	//ofstream fout;			파일출력스트림 객체 fout 선언
	//fout.open(fileName);		fout을 fileName과 연결
	ofstream fout(fileName);
	fout << "2000000 홍길동" << endl;
	fout << content << endl;
}
