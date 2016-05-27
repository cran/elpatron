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


#if !defined(FIT_WORKOUT_MESG_HPP)
#define FIT_WORKOUT_MESG_HPP

#include "fit_mesg.h"

namespace fit
{

class WorkoutMesg : public Mesg
{
public:
    WorkoutMesg(void) : Mesg(Profile::MESG_WORKOUT)
    {
    }

    WorkoutMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sport field
    ///////////////////////////////////////////////////////////////////////
    FIT_SPORT GetSport(void) const
    {
        return GetFieldENUMValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sport field
    ///////////////////////////////////////////////////////////////////////
    void SetSport(FIT_SPORT sport)
    {
        SetFieldENUMValue(4, sport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns capabilities field
    ///////////////////////////////////////////////////////////////////////
    FIT_WORKOUT_CAPABILITIES GetCapabilities(void) const
    {
        return GetFieldUINT32ZValue(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set capabilities field
    ///////////////////////////////////////////////////////////////////////
    void SetCapabilities(FIT_WORKOUT_CAPABILITIES capabilities)
    {
        SetFieldUINT32ZValue(5, capabilities, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns num_valid_steps field
    // Comment: number of valid steps
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetNumValidSteps(void) const
    {
        return GetFieldUINT16Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set num_valid_steps field
    // Comment: number of valid steps
    ///////////////////////////////////////////////////////////////////////
    void SetNumValidSteps(FIT_UINT16 numValidSteps)
    {
        SetFieldUINT16Value(6, numValidSteps, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns wkt_name field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetWktName(void) const
    {
        return GetFieldSTRINGValue(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set wkt_name field
    ///////////////////////////////////////////////////////////////////////
    void SetWktName(FIT_WSTRING wktName)
    {
        SetFieldSTRINGValue(8, wktName, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_WORKOUT_MESG_HPP)
