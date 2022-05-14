#pragma once
#include "DocWriter.h"
class HTMLWriter :
    public DocWriter
{
protected:
    string fontName = "돋움";
    int fontSize = 15;
    string fontColor = "blue";
public:
    HTMLWriter();
    ~HTMLWriter();
    //HTMLWriter(const string& fileName, const string& content);
    using DocWriter::DocWriter;     //부모의 생성자를 그대로 상속받아서 씀
    void setFont(const string& fontName, const int& fontSize, const string& fontColor);
    void write();
};

