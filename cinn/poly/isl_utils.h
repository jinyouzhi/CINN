#pragma once

#include <isl/cpp.h>
#include <string>
#include <vector>

namespace cinn {
namespace poly {

//! Get dimension names from isl containers.
// @{
std::vector<std::string> GetDimNames(const isl::set &x);
std::vector<std::string> GetDimNames(const isl::map &x, isl_dim_type dim_type);
// @}

}  // namespace poly
}  // namespace cinn