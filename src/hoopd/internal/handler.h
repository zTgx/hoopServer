#ifndef __HOOPD_INTERNAL_HANDLER_H_
#define __HOOPD_INTERNAL_HANDLER_H_

#include <iostream>
#include <functional> //std::function
#include <hoopd/request.h>
#include <hoopd/response.h>
#include <regex> // std::regex

namespace hoopd {
    // namespace handler {
    //     void handle_gets(std::string& pattern) {
    //         std::cout << "pattern : " << pattern << std::endl;


    //     }
    // }

class Handler {    
public:
    typedef std::function<void(const Request&, Response&)> Action;
    typedef std::vector<std::pair<std::regex, Action>> Routers;

public:
    void handle(const std::string&);
    void push_back(const std::string&, Action);

private:
    Routers _gets;
};
} // namespace hoopd

#endif