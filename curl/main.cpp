#include <iostream>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/document.h>
#include <rapidjson/encodings.h>


int main() {
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

    return 0;
}