// Filename: pta_LMatrix3.cxx
// Created by:  drose (27Feb10)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) Carnegie Mellon University.  All rights reserved.
//
// All use of this software is subject to the terms of the revised BSD
// license.  You should have received a copy of this license along
// with this source code in a file named "LICENSE."
//
////////////////////////////////////////////////////////////////////

#include "pta_LMatrix3.h"

// Tell GCC that we'll take care of the instantiation explicitly here.
#ifdef __GNUC__
#pragma implementation
#endif

template class PointerToBase<ReferenceCountedVector<LMatrix3f> >;
template class PointerToArrayBase<LMatrix3f>;
template class PointerToArray<LMatrix3f>;
template class ConstPointerToArray<LMatrix3f>;

template class PointerToBase<ReferenceCountedVector<LMatrix3d> >;
template class PointerToArrayBase<LMatrix3d>;
template class PointerToArray<LMatrix3d>;
template class ConstPointerToArray<LMatrix3d>;
