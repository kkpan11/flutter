// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "impeller/toolkit/interop/path.h"

namespace impeller::interop {

Path::Path(const SkPath& path) : path_(path) {}

Path::~Path() = default;

const SkPath& Path::GetPath() const {
  return path_;
}

ImpellerRect Path::GetBounds() const {
  const auto bounds = path_.getBounds();
  return ImpellerRect{
      .x = bounds.x(),
      .y = bounds.y(),
      .width = bounds.width(),
      .height = bounds.height(),
  };
}

}  // namespace impeller::interop
