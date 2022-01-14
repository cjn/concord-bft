// Concord
//
// Copyright (c) 2018-2022 VMware, Inc. All Rights Reserved.
//
// This product is licensed to you under the Apache 2.0 license (the "License").
// You may not use this product except in compliance with the Apache 2.0 License.
//
// This product may include a number of subcomponents with separate copyright
// notices and license terms. Your use of these subcomponents is subject to the
// terms and conditions of the subcomponent's license, as noted in the LICENSE
// file.

#pragma once

#include <cstdint>
#include <string>

namespace concord::performance {
class ISystemResourceEntity {
 public:
  virtual ~ISystemResourceEntity() = default;
  // Implementation returns how much more pruned blocks can this entity support.
  virtual int64_t getAvailableResources() const = 0;
  // Measurements of handled operations. Can be transaction, prune blocks, etc.
  virtual uint64_t getMeasurements() const = 0;
  // Name of the resource for metrics purposes.
  virtual const std::string getResourceName() const = 0;
};
}  // namespace concord::performance
