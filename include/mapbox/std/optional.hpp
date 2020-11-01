#pragma once

// C++17
#if __cplusplus >= 201703L

#include <optional>

// C++14 (enforced via CMake)
#else

#include <experimental/optional>

#endif  // __cplusplus >= 201703L

namespace mapbox {
namespace base {

#if __cplusplus >= 201703L

template <typename T>
using optional = std::optional<T>;

using nullopt_t = std::nullopt_t;

constexpr nullopt_t nullopt = std::nullopt;

#else

template <typename T>
using optional = std::experimental::optional<T>;

using nullopt_t = std::experimental::nullopt_t;

constexpr nullopt_t nullopt = std::experimental::nullopt;

#endif  // __cplusplus >= 201703L

}  // namespace base
}  // namespace mapbox
