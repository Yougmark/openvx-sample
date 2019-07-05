/*

 * Copyright (c) 2012-2017 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _OPENVX_INT_threshold_H_
#define _OPENVX_INT_threshold_H_

#include <VX/vx.h>
#include "vx_internal.h"

/*!
 * \file
 * \brief The internal thresholds implementation.
 * \author Erik Rainey <erik.rainey@gmail.com>
 * \defgroup group_int_threshold Internal Threshold API
 * \ingroup group_internal
 * \brief The Internal Threshold API.
 */

/*! \brief Releases an internally referenced threshold.
 * \param [in] threshold The pointer to a threshold structure.
 * \ingroup group_int_threshold
 */
void ownReleaseThresholdInt(vx_threshold_t *threshold);

#endif
