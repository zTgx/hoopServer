#include <hoopd/hoopd.h>
#include <iostream>

namespace hoopd
{
HttpServer::HttpServer() : noncopyable() {
}

HttpServer::HttpServer(const Settings& settings) : noncopyable() {
    _settings = settings;
}

HttpServer::~HttpServer() {
}

bool HttpServer::run() {
    std::cout << "hoopd is started running ... " << std::endl;

    // bind

    // run
    _service.set_handler(_handler);
    _service.set_settings(_settings);
    _service.run();

    return true;
}

// ---------------------------
HttpServer& HttpServer::set_scope(const std::string& scope) {
    _scope = scope;
    return *this;
}

HttpServer& HttpServer::get(const std::string& pattern, Handler::Action h) {
    _handler.push_back(_scope + pattern, h);
    return *this;
}

} // namespace hoopd
