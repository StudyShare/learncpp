#include <iostream>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/document.h>
#include <rapidjson/encodings.h>
#include <curl/curl.h>
#include "CurlExample.h"
#include <curl/easy.h>;


FILE *fp;  //定义FILE类型指针
//这个函数是为了符合CURLOPT_WRITEFUNCTION而构造的
//完成数据保存功能
size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream)
{
    int written = fwrite(ptr, size, nmemb, (FILE *)fp);
    return written;
}

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
     rapidjson::StringBuffer buffer;
     rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
     writer.StartObject();
     writer.Key("hello");
     writer.String("world");
     writer.Key("t");
     writer.Bool(false);
     writer.Key("n");
     writer.Null();
     writer.Key("i");
     writer.Uint(123);
     writer.Key("i1");
     writer.Int(-123);
     writer.Key("pi");
     writer.Double(3.1415926);
     writer.Key("a");
     writer.StartArray();
     for(int i =0;i<4;i++){
         writer.Uint(i);
     }
     writer.EndArray();
     writer.EndObject();

     const rapidjson::UTF8<>::Ch * json  = buffer.GetString();
     std::cout<<json<<std::endl;

     //解析json
     rapidjson::Document document;
     document.Parse(json);
     rapidjson::Value &value = document["hello"];
     std::cout<< value.GetString() <<std::endl;

     CurlExample example;
     example.getUrl("/tmp/get.html");


    return 0;
}