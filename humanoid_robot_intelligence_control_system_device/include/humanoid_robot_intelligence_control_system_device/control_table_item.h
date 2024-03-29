/*******************************************************************************
 * Copyright 2018 ROBOTIS CO., LTD.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/

/*
 * control_table_item.h
 *
 *  Created on: 2015. 12. 16.
 *      Author: zerom
 */

#ifndef ROBOTIS_DEVICE_CONTROL_TABLE_ITEM_H_
#define ROBOTIS_DEVICE_CONTROL_TABLE_ITEM_H_

#include <stdint.h>

namespace humanoid_robot_intelligence_control_system_framework {

enum AccessType { Read, ReadWrite };

enum MemoryType { EEPROM, RAM };

class ControlTableItem {
public:
  std::string item_name_;
  uint16_t address_;
  AccessType access_type_;
  MemoryType memory_type_;
  uint8_t data_length_;
  int32_t data_min_value_;
  int32_t data_max_value_;
  bool is_signed_;

  ControlTableItem()
      : item_name_(""), address_(0), access_type_(Read), memory_type_(RAM),
        data_length_(0), data_min_value_(0), data_max_value_(0),
        is_signed_(false) {}
};

} // namespace humanoid_robot_intelligence_control_system_framework

#endif /* ROBOTIS_DEVICE_CONTROL_TABLE_ITEM_H_ */
