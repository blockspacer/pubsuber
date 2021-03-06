#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <spdlog/spdlog.h>
#include "PSLog.h"

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  spdlog::set_level(spdlog::level::trace);
  spdlog::set_pattern("%D-%T.%f [%t] [%L]: %v");
  spdlog::debug("Start tests");

  pubsuber::logger::Setup(nullptr, spdlog::level::debug);

  return RUN_ALL_TESTS();
}
