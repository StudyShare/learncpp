//
// Created by sym on 4/22/19.
//

#include "CurlExample.h"
#include <iostream>

bool CurlExample::getUrl(char *filename) {

    CURL *curl;
    CURLcode res;
    FILE *fp;
    if((fp=fopen(filename,"w")) == NULL){
        return false;
    }
    struct curl_slist *headers = NULL;
    curl_slist_append(headers,"Accept: Agent-007");
    curl = curl_easy_init();
    if(curl)
    {
//        curl_easy_setopt(curl,CURLOPT_PROXY,"");//代理

        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);// 改协议头
        curl_easy_setopt(curl, CURLOPT_URL,"http://www.baidu.com");
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp); //将返回的http头输出到fp指向的文件
        curl_easy_setopt(curl, CURLOPT_HEADERDATA, fp); //将返回的html主体数据输出到fp指向的文件
        res = curl_easy_perform(curl);//执行
        std::cout<<"********** "<<res<<std::endl;
        if(res != 0){
           curl_slist_free_all(headers);
           curl_easy_cleanup(curl);
        }
        fclose(fp);
        return true;
    }
    return false;
}
