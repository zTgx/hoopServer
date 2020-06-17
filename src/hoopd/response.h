#ifndef __HOOPD_RESPONSE_H_
#define __HOOPD_RESPONSE_H_

#include <hoopd/internal/descriptable.h>

namespace hoopd {
class Response : public Descriptable {
public:
    // Constructor
    Response();

    // Destructor
    virtual ~Response();

public: 
    const void description() const;
    
public:
    // Copy Constructor
    Response(const Response&) = delete;

    // Copy Assignment Operator
    Response& operator=(const Response& rhs) = delete;

    // Move Constructor
    Response(Response&& moved) = delete;

    // Move Assignment Operator
    Response& operator=(Response&& moved) = delete;

public:
    bool reset();
};
}

#endif