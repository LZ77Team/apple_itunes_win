// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_COOKIES_COOKIE_CONSTANTS_H_
#define NET_COOKIES_COOKIE_CONSTANTS_H_

#include <string>

namespace net {

enum CookiePriority {
  COOKIE_PRIORITY_LOW     = 0,
  COOKIE_PRIORITY_MEDIUM  = 1,
  COOKIE_PRIORITY_HIGH    = 2,
  COOKIE_PRIORITY_DEFAULT = COOKIE_PRIORITY_MEDIUM
};

// Returns the Set-Cookie header priority token corresponding to |priority|.
const std::string CookiePriorityToString(CookiePriority priority);

// Converts the Set-Cookie header priority token |priority| to a CookiePriority.
// Defaults to COOKIE_PRIORITY_DEFAULT for empty or unrecognized strings.
CookiePriority StringToCookiePriority(const std::string& priority);
std::string ToLower(const std::string& seque);
}  // namespace net

#endif  // NET_COOKIES_COOKIE_CONSTANTS_H_
