#pragma once

namespace km
{

#include <memory>
#include <kmtricks/cli/cli_common.hpp>
#include <kmtricks/cmd/cmd_common.hpp>

struct filter_options : km_options
{
  std::string key;
  std::string output;

  std::size_t c_ab_min;
  bool cpr_in {false};
  bool cpr_out {false};

  std::string display()
  {
    std::stringstream ss;
    ss << this->global_display();
    RECORD(ss, output);
    RECORD(ss, key);
    RECORD(ss, cpr_in);
    RECORD(ss, cpr_out);
    RECORD(ss, output);
    return ss.str();
  }
};

using filter_options_t = std::shared_ptr<struct filter_options>;

} // namespace km
