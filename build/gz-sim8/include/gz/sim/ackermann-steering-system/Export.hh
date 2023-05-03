/*
 * Copyright (C) 2017 Open Source Robotics Foundation
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
 *
*/

/*
 * ==========================================================================
 * This file was automatically generated by CMake; do not modify it directly.
 * To modify this file, make changes to gz-cmake/cmake/Export.hh.in
 * ==========================================================================
*/

#ifndef GZ_SIM_ACKERMANN_STEERING_SYSTEM_EXPORT_HH_
#define GZ_SIM_ACKERMANN_STEERING_SYSTEM_EXPORT_HH_

// The detail/Export.hh header is automatically generated by CMake, which only
// provides the system-dependent implementations of these macros, with no
// commentary or explanation, so we configure this public-facing header which
// leverages the auto-generated macros but provides commentary for them.
#include "gz/sim/ackermann-steering-system/detail/Export.hh"


#ifndef GZ_SIM_ACKERMANN_STEERING_SYSTEM_VISIBLE
/// For gz-sim8-ackermann-steering-system developers: Apply this macro to gz-sim8-ackermann-steering-system
/// functions and classes which consumers of this library will need to be able
/// to call from their own programs or libraries.
#define GZ_SIM_ACKERMANN_STEERING_SYSTEM_VISIBLE \
  DETAIL_GZ_SIM_ACKERMANN_STEERING_SYSTEM_VISIBLE
#endif


#ifndef GZ_SIM_ACKERMANN_STEERING_SYSTEM_HIDDEN
/// For gz-sim8-ackermann-steering-system developers: Apply this macro to gz-sim8-ackermann-steering-system
/// functions and classes which must not be used by consumers of this library.
/// By default, this property is applied to all classes and functions which are
/// not tagged with GZ_SIM_ACKERMANN_STEERING_SYSTEM_VISIBLE, so this does not
/// generally need to be used.
#define GZ_SIM_ACKERMANN_STEERING_SYSTEM_HIDDEN \
  DETAIL_GZ_SIM_ACKERMANN_STEERING_SYSTEM_HIDDEN
#endif


#ifndef GZ_DEPRECATED
/// For gz-sim8-ackermann-steering-system developers: Use this macro to indicate that a
/// function or class has been deprecated and should no longer be used. A
/// version should be specified to provide context to the user about when the
/// function became deprecated.
#define GZ_DEPRECATED(version) GZ_DEPRECATED_ALL_VERSIONS
#endif


// TICKTOCK IGNITION ========================================================
// TODO(CH3): Remove on ticktock, supports defining IGNITION macros if a lib
//            is using GZ_ prefixed export macros
#ifndef IGNITION_SIM_ACKERMANN_STEERING_SYSTEM_VISIBLE
#define IGNITION_SIM_ACKERMANN_STEERING_SYSTEM_VISIBLE GZ_SIM_ACKERMANN_STEERING_SYSTEM_VISIBLE
#endif

#ifndef IGNITION_SIM_ACKERMANN_STEERING_SYSTEM_HIDDEN
#define IGNITION_SIM_ACKERMANN_STEERING_SYSTEM_HIDDEN GZ_SIM_ACKERMANN_STEERING_SYSTEM_HIDDEN
#endif

#ifndef IGN_DEPRECATED_ALL_VERSIONS
#define IGN_DEPRECATED_ALL_VERSIONS GZ_DEPRECATED_ALL_VERSIONS
#endif

#ifndef IGN_DEPRECATED
#define IGN_DEPRECATED(version) GZ_DEPRECATED_ALL_VERSIONS
#endif


#endif  // GZ_SIM_ACKERMANN_STEERING_SYSTEM_EXPORT_HH_
