//
// Created by Mateusz Chojnacki on 22.04.2018.
//

#ifndef CORE_TASKREQ_H
#define CORE_TASKREQ_H

#include <curl/curl.h>
#include <rapidjson/document.h>
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>
#include <string>
#include <cstdint>
#include <memory>

#include "Tasks.h"
#define staticUrl "http://localhost:3000/tasks/"

class TaskReq {
    CURL *curl;
    CURLcode res;
    std::string response;
    Tasks *tasks;

public:
    TaskReq();
    Task getTask(std::string key);
    Tasks getTasks();
    void addTask(Task _task);
    void deleteTask(std::string key);
};


#endif //CORE_TASKREQ_H
