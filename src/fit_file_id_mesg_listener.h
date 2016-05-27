////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2016 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 16.73Release
// Tag = production-akw-16.73.00-0-gef88b3f
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_FILE_ID_MESG_LISTENER_HPP)
#define FIT_FILE_ID_MESG_LISTENER_HPP

#include "fit_file_id_mesg.h"

namespace fit
{

class FileIdMesgListener
{
public:
    virtual ~FileIdMesgListener() {}
    virtual void OnMesg(FileIdMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_FILE_ID_MESG_LISTENER_HPP)
