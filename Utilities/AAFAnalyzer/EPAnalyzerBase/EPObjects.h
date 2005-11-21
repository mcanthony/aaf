//=---------------------------------------------------------------------=
//
// $Id$
//
// The contents of this file are subject to the AAF SDK Public
// Source License Agreement (the "License"); You may not use this file
// except in compliance with the License.  The License is available in
// AAFSDKPSL.TXT, or you may obtain a copy of the License from the AAF
// Association or its successor.
//
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied.  See
// the License for the specific language governing rights and limitations
// under the License.
//
// The Original Code of this file is Copyright 1998-2004, Licensor of the
// AAF Association.
//
//=---------------------------------------------------------------------=

#ifndef __EPOBJECTS_h_
#define __EPOBJECTS_h_

//Ax files
#include <AxTypes.h>

namespace aafanalyzer {

class EPObject
{
 public:
  ~EPObject();
  static const AxString GetName();

 protected:
  EPObject();

 private:
  //prohibited
  EPObject( const EPObject& );
  EPObject& operator=( const EPObject& );
};

} // end of namespace diskstream

#endif /*EPOBJECTS_H_*/
