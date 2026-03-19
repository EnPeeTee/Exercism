#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int findBreak = line.find(": ") + 2;
    std::string result = line.substr(findBreak);
    return result;
}

std::string log_level(std::string line) {
    // return the log level
    int findBreak = line.find("]") - 1;
    std::string result = line.substr(1, findBreak);
    return result;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string getMsg = message(line);
    std::string getLevel = log_level(line);
    std::string result = getMsg + ' ' + '(' + getLevel + ')';
    return result;
}
}  // namespace log_line
