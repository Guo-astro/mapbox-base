#include <mapbox/std/optional.hpp>

#include <gtest/gtest.h>

TEST(Optional, Basic) {
    mapbox::base::optional<bool> maybeBoolean;
    EXPECT_FALSE(maybeBoolean);

    try {
        maybeBoolean.value();
        ASSERT_TRUE(false);
    } catch (...) {}

    maybeBoolean = false;
    EXPECT_TRUE(maybeBoolean);
    EXPECT_FALSE(maybeBoolean.value());

    maybeBoolean = true;
    EXPECT_TRUE(maybeBoolean);
    EXPECT_TRUE(maybeBoolean.value());
}
