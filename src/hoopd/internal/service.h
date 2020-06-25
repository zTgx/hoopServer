#ifndef __HOOPD_INTERNAL_SERVICE_H_
#define __HOOPD_INTERNAL_SERVICE_H_

#include <hoopd/http.h>
#include <hoopd/internal/handler.h>

namespace hoopd {

using Settings = http::Settings;

class Service {
public:
    void set_handler(Handler&);
    void set_settings(const Settings&);
    bool run();

private:
    void handle_request(int);
    void set_nonblocking(int, bool);

private:
    Settings _settings;
    Handler _handler;
};
}

#endif