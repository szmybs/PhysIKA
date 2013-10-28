/*
 * @file vector.h 
 * @brief This abstract class is intended to provide a uniform interface for Vector2D and Vector3D.
 *        Vector2D and Vector3D are implemented using template partial specialization of this class. 
 * @author Fei Zhu
 * 
 * This file is part of Physika, a versatile physics simulation library.
 * Copyright (C) 2013 Physika Group.
 *
 * This Source Code Form is subject to the terms of the GNU General Public License v2.0. 
 * If a copy of the GPL was not distributed with this file, you can obtain one at:
 * http://www.gnu.org/licenses/gpl-2.0.html
 *
 */

#ifndef PHYSIKA_CORE_VECTORS_VECTOR_H_
#define PHYSIKA_CORE_VECTORS_VECTOR_H_

#include "Physika_Core/Vectors/vector_base.h"

namespace Physika{

template <typename Scalar, int Dim>
class Vector: public VectorBase
{
public:
    Vector(){}
    ~Vector(){}
    virtual int dims() const=0;
protected:
};

}  //end of namespace Physika

#endif //PHYSIKA_CORE_VECTORS_VECTOR_H_
