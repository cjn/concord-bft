// Concord
//
// Copyright (c) 2018 VMware, Inc. All Rights Reserved.
//
// This product is licensed to you under the Apache 2.0 license (the "License").
// You may not use this product except in compliance with the Apache 2.0 License.
//
// This product may include a number of subcomponents with separate copyright
// notices and license terms. Your use of these subcomponents is subject to the
// terms and conditions of the subcomponent's license, as noted in the
// LICENSE file.

#pragma once

#include "threshsign/SecretSharingPolynomial.h"
#include "threshsign/bls/relic/BlsNumTypes.h"

namespace BLS {
namespace Relic {

class BlsPolynomial : public SecretSharingPolynomial<BNT> {
 public:
  BlsPolynomial(const BNT& secret, int degree, const BNT& fieldSize);
  virtual ~BlsPolynomial();

 public:
  virtual BNT randomCoeff(const BNT& coeffLimit) const;
};

} /* namespace Relic */
} /* namespace BLS */
