#pragma once

#ifndef GEODE_GFCPP_PDXUNREADFIELDS_H_
#define GEODE_GFCPP_PDXUNREADFIELDS_H_

/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "gf_base.hpp"
#include "SharedBase.hpp"

namespace apache {
namespace geode {
namespace client {

/**
 * Marker interface for an object that Geode creates and returns
 * from {@link PdxReader#readUnreadFields() readUnreadFields}.
 * If you call readUnreadFields then you must also call
 * {@link PdxWriter#writeUnreadFields(PdxUnreadFields) writeUnreadFields} when
 * that object is reserialized. If you do not call {@link
 *PdxWriter#writeUnreadFields(PdxUnreadFields) writeUnreadFields}
 * but you did call {@link PdxReader#readUnreadFields() readUnreadFields} the
 *unread fields will not be written.
 * <p>Unread fields are those that are not explicitly read with a {@link
 *PdxReader} readXXX method.
 * This should only happen when a domain class has changed by adding or removing
 *one or more fields.
 **/
class CPPCACHE_EXPORT PdxUnreadFields : public SharedBase {
 public:
  PdxUnreadFields() {}
  virtual ~PdxUnreadFields() {}
};
}  // namespace client
}  // namespace geode
}  // namespace apache

#endif // GEODE_GFCPP_PDXUNREADFIELDS_H_
