#pragma once
#include "DocWriter.h"
class HTMLWriter :
    public DocWriter
{
protected:
    string fontName = "����";
    int fontSize = 15;
    string fontColor = "blue";
public:
    HTMLWriter();
    ~HTMLWriter();
    //HTMLWriter(const string& fileName, const string& content);
    using DocWriter::DocWriter;     //�θ��� �����ڸ� �״�� ��ӹ޾Ƽ� ��
    void setFont(const string& fontName, const int& fontSize, const string& fontColor);
    void write();
};

