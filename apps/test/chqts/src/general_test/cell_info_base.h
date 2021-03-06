/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _GTS_NANOAPPS_GENERAL_TEST_CELL_INFO_BASE_H_
#define _GTS_NANOAPPS_GENERAL_TEST_CELL_INFO_BASE_H_

#include <cstdbool>
#include <cstdint>

namespace general_test {

class CellInfoBase {
 public:
  // TODO: A quick hack to convert to a uint32_t for sending fatal failure
  static void sendFatalFailureInt32(const char *message, int32_t value);
  static void sendFatalFailureUint8(const char *message, uint8_t value);
  static void sendFatalFailure(const char *message);

 private:
  CellInfoBase();

 protected:
  static bool isBoundedInt32(int32_t value, int32_t lower, int32_t upper,
                             int32_t invalid, bool invalidAllowed = true);
  static bool isBoundedInt64(int64_t value, int64_t lower, int64_t upper,
                             int64_t invalid, bool invalidAllowed = true);
};

}  // namespace general_test

#endif  // _GTS_NANOAPPS_GENERAL_TEST_CELL_INFO_BASE_H_
