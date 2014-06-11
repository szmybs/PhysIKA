/*
* @file sph_neighbor_query.h 
* @Basic sph neighbor query class, offer neighbor query data structure and interface
* @author Sheng Yang
* 
* This file is part of Physika, a versatile physics simulation library.
* Copyright (C) 2013 Physika Group.
*
* This Source Code Form is subject to the terms of the GNU General Public License v2.0. 
* If a copy of the GPL was not distributed with this file, you can obtain one at:
* http://www.gnu.org/licenses/gpl-2.0.html
*
*/

#ifndef PHYSIKA_DYNAMICS_SPH_SPH_NEIGHBOR_QUERY_H_
#define PHYSIKA_DYNAMICS_SPH_SPH_NEIGHBOR_QUERY_H_

#include "Physika_Core/Vectors/vector.h"

namespace Physika{

    template<typename Scalar>
    class NeighborList
    {
    public:
        //const int NEIGHBOR_SIZE = 150;
        //const int NEIGHBOR_SEGMENT = 20;
        NeighborList() {size_ = 0; }
        ~NeighborList(){};
    public:
        int size_;
        int ids_[150];
        Scalar distance_[150];
    };

    template<typename Scalar, int dim>
    class INeighborQuery {
    public:
        virtual void getNeighbors(Vector<Scalar,dim>& in_pos, Scalar in_radius, NeighborList<Scalar>& out_neighborList) = 0;
        virtual void getSizedNeighbors(Vector<Scalar,dim>& in_pos, Scalar in_radius, NeighborList<Scalar>& out_neighborList, int in_maxN) = 0;
    };

}//end of namespace Physika

#endif //PHYSIKA_DYNAMICS_SPH_SPH_NEIGHBOR_QUERY_H_