#include "core/meta.hpp"

namespace example::core {

static constexpr const char* version = "0.1";

std::string getVersion() {
    return version;
}

}
