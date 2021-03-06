#include <iostream>
#include <string>

#include <util/box.hpp>
#include <util/output_ocr.hpp>
#include <util/decoded_text.hpp>

using namespace std;

OutputOcr Ocr (string path, Box b) {
    OutputOcr op;
    DecodedText dt,dt1;
    vector<string> words;
    vector<float> cf;
    words.push_back("w1");
    words.push_back("w2");
    cf.push_back(1.0);
    cf.push_back(2.1);
    dt.box=b;
    dt.words=words;
    dt.confs=cf;
    dt1.box=b;
    dt1.words=words;
    dt1.confs=cf;

    vector<DecodedText> dtr;
    dtr.push_back(dt);
    dtr.push_back(dt1);
    op.box=b;
    op.text_vec=dtr;
    return op;
}
OutputOcr Ocr(string path){
	OutputOcr op;
	int a[]={100,200,300,400};
	op.box=Box(a);
    DecodedText dt,dt1;
    vector<string> words;
    vector<float> cf;
    words.push_back("w1");
    words.push_back("w2");
    cf.push_back(1.0);
    cf.push_back(2.1);
    dt.words=words;
    dt.confs=cf;
    dt1.words=words;
    dt1.confs=cf;

    vector<DecodedText> dtr;
    dtr.push_back(dt);
    dtr.push_back(dt1);
    op.text_vec=dtr;
    return op;

}
