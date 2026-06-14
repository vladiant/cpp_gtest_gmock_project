#include <gtest/gtest.h>

#include <basic_warper.hpp>
#include <checked_warper.hpp>
#include <clamped_warper.hpp>
#include <cstdint>
#include <operation_strategy.hpp>

namespace vva {

TEST(OperationStrategyLogic, GeneralOperationStrategyBasic) {
  BasicOperationWarper warper;

  OperationStrategy test_strategy(warper);

  EXPECT_EQ(test_strategy(6, 2), 4);
}

TEST(OperationStrategyLogic, GeneralOperationStrategyChecked) {
  CheckedOperationWarper warper;

  OperationStrategy test_strategy(warper);

  EXPECT_EQ(test_strategy(6, 2), 4);
}

TEST(OperationStrategyLogic, GeneralOperationStrategyClamped) {
  ClampedOperationWarper warper;

  OperationStrategy test_strategy(warper);

  EXPECT_EQ(test_strategy(6, 2), 4);
}

}  // namespace vva
