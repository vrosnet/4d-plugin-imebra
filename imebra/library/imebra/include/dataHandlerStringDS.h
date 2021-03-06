/*

Imebra 2011 build 2011-09-18_22-24-41

Imebra: a C++ Dicom library

Copyright (c) 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010 by Paolo Brandoli
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:
- Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.
- Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE FREEBSD PROJECT ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE FREEBSD PROJECT OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those of the authors
 and should not be interpreted as representing official policies, either expressed or implied,
 of the Imebra Project.

Imebra is available at http://imebra.com



*/

/*! \file dataHandlerStringDS.h
    \brief Declaration of the class dataHandlerStringDS.

*/

#if !defined(imebraDataHandlerStringDS_367AAE47_6FD7_4107_AB5B_25A355C5CB6E__INCLUDED_)
#define imebraDataHandlerStringDS_367AAE47_6FD7_4107_AB5B_25A355C5CB6E__INCLUDED_

#include "dataHandlerString.h"


///////////////////////////////////////////////////////////
//
// Everything is in the namespace puntoexe::imebra
//
///////////////////////////////////////////////////////////
namespace puntoexe
{

namespace imebra
{

namespace handlers
{

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
/// \brief Handles the Dicom type "DS" (decimal string)
///
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
class dataHandlerStringDS : public dataHandlerString
{
public:
	// Overwritten to use getDouble()
	///////////////////////////////////////////////////////////
	virtual imbxInt32 getSignedLong(const imbxUint32 index) const;

	// Overwritten to use getDouble()
	///////////////////////////////////////////////////////////
	virtual imbxUint32 getUnsignedLong(const imbxUint32 index) const;

	// Overwritten to use setDouble()
	///////////////////////////////////////////////////////////
	virtual void setSignedLong(const imbxUint32 index, const imbxInt32 value);

	// Overwritten to use setDouble()
	///////////////////////////////////////////////////////////
	virtual void setUnsignedLong(const imbxUint32 index, const imbxUint32 value);

	// Overwritten to use the exponential form if needed
	///////////////////////////////////////////////////////////
	virtual void setDouble(const imbxUint32 index, const double value);

	// Get the padding byte
	///////////////////////////////////////////////////////////
	virtual imbxUint8 getPaddingByte() const;

	// Get the element size
	///////////////////////////////////////////////////////////
	virtual imbxUint32 getUnitSize() const;

protected:
	// Return the maximum string's length
	///////////////////////////////////////////////////////////
	virtual imbxUint32 maxSize() const;

};

} // namespace handlers

} // namespace imebra

} // namespace puntoexe

#endif // !defined(imebraDataHandlerStringDS_367AAE47_6FD7_4107_AB5B_25A355C5CB6E__INCLUDED_)
