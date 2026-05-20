#include <iostream>
#include <string>

namespace log_line {
std::string message(std::string line) {
  // return the message
  return line.substr(line.find(":") + 2);
} // log_line

std::string log_level(std::string line) {
  // return the log level
  size_t left_bracket_pos = line.find("[");
  size_t right_bracket_pos = line.find("]");

  return line.substr(left_bracket_pos + 1, right_bracket_pos - 1);
} // log_level

std::string reformat(std::string line) {
  // 1. Find the colon
  size_t pos = line.find(":");
  if (pos == std::string::npos)
    return line; // Return original if format is wrong

  // 2. Extract the message (everything after the colon)
  // We add 1 to skip the colon, then trim the leading space
  std::string msg = line.substr(pos + 1);
  std::cout << msg << std::endl;
  if (!msg.empty() && msg[0] == ' ')
    msg.erase(0, 1);

  // 3. Extract the log level (everything before the colon)
  std::string level = line.substr(0, pos);

  // 4. Replace [ with ( and ] with )
  size_t open_bracket = level.find("[");
  if (open_bracket != std::string::npos) {
    level.replace(open_bracket, 1, "(");
  }
  size_t close_bracket = level.find("]");
  if (close_bracket != std::string::npos) {
    level.replace(close_bracket, 1, ")");
  }

  // 5. Combine and return
  return msg + " " + level;
} // reformat
} // namespace log_line
