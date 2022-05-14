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
	cout << "DocWriter �Ҹ���" << endl;
}

DocWriter::DocWriter(const string& fileName, const string& content)
	:fileName(fileName), content(content)
{
	cout << "DocWriter ������" << endl;
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
	//ofstream fout;			������½�Ʈ�� ��ü fout ����
	//fout.open(fileName);		fout�� fileName�� ����
	ofstream fout(fileName);
	fout << "2000000 ȫ�浿" << endl;
	fout << content << endl;
}
