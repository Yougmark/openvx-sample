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

#ifndef _OPENVX_INT_MATRIX_H_
#define _OPENVX_INT_MATRIX_H_

#include <VX/vx.h>

/*!
 * \file
 * \brief The internal matrix implementation
 * \author Erik Rainey <erik.rainey@gmail.com>
 *
 * \defgroup group_int_matrix Internal Matrix API
 * \ingroup group_internal
 * \brief The Internal Matrix API.
 */

/*! \brief Destroys a matrix objects
 * \param [in] ref The matrix to destroy.
 * \ingroup group_int_matrix
 */
void ownDestructMatrix(vx_reference ref);

#endif
