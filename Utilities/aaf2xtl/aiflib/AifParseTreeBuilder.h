//=---------------------------------------------------------------------=
//
// $Id$ $Name$
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
// The Initial Developer of the Original Code of this file and the
// Licensor of the AAF Association is Siemens SBS Media
// All rights reserved.
//
//=---------------------------------------------------------------------=

#include <AxSmartPointer.h>

class AifParseTree;
class AifParseTreeNode;
class AifParseTreeNodeFactory;

class AifParseTreeBuilderAcceptFunc {
public:
	virtual bool operator()( IAAFObjectSP spObject ) = 0;
};

class AifParseTreeBuilderAcceptAll : public AifParseTreeBuilderAcceptFunc {
public:
	virtual ~AifParseTreeBuilderAcceptAll()
		{}
	virtual bool operator()( IAAFObjectSP spObject )
		{ return true; }
};

void
AifBuildParseTree( IAAFObjectSP spSubTreeRootObject, 
		   AifParseTreeNode* pParent,
		   AifParseTreeNodeFactory& nodeFactory,
		   AifParseTreeBuilderAcceptFunc& acceptFunc = AifParseTreeBuilderAcceptAll() );


std::auto_ptr<AifParseTreeNode> AifBuildParseTree( IAAFObjectSP spSubTreeRootObject,
						   AifParseTreeNodeFactory& nodeFactory,
						   AifParseTreeBuilderAcceptFunc& acceptFunc = AifParseTreeBuilderAcceptAll() );
