// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_CRASH_KEYS_H_
#define SERVICES_NETWORK_CRASH_KEYS_H_

#include "base/debug/crash_logging.h"
#include "base/optional.h"
#include "url/origin.h"

namespace network {

struct ResourceRequest;

namespace debug {

// TODO(lukasza): Move to //services/network/public/cpp to enable reuse outside
// of //services/network (e.g. see https://crrev.com/c/2923326).
base::debug::CrashKeyString* GetRequestInitiatorOriginLockCrashKey();

class ScopedRequestCrashKeys {
 public:
  ScopedRequestCrashKeys(const network::ResourceRequest& request);
  ~ScopedRequestCrashKeys();

  ScopedRequestCrashKeys(const ScopedRequestCrashKeys&) = delete;
  ScopedRequestCrashKeys& operator=(const ScopedRequestCrashKeys&) = delete;

 private:
  base::debug::ScopedCrashKeyString url_;
  url::debug::ScopedOriginCrashKey request_initiator_;
  base::debug::ScopedCrashKeyString resource_type_;
};

}  // namespace debug
}  // namespace network

#endif  // SERVICES_NETWORK_CRASH_KEYS_H_
