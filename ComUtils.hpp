////////////////////////////////////////////////////////////////////////////////
//! \file   ComUtils.hpp
//! \brief  COM utility functions.
//! \author Chris Oldwood

// Check for previous inclusion
#ifndef COM_COMUTILS_HPP
#define COM_COMUTILS_HPP

#if _MSC_VER > 1000
#pragma once
#endif

namespace COM
{

////////////////////////////////////////////////////////////////////////////////
// Format the GUID as a string in Registry format.

tstring FormatGUID(const GUID& rGUID);

////////////////////////////////////////////////////////////////////////////////
// Find the human readable name for the class ID.

tstring LookupCLSID(const CLSID& rCLSID);

////////////////////////////////////////////////////////////////////////////////
// Find the human readable name for the interface ID.

tstring LookupIID(const IID& rIID);

//namespace COM
}

#endif // COM_COMUTILS_HPP
