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


#if !defined(FIT_TIMESTAMP_CORRELATION_MESG_HPP)
#define FIT_TIMESTAMP_CORRELATION_MESG_HPP

#include "fit_mesg.h"

namespace fit
{

class TimestampCorrelationMesg : public Mesg
{
public:
    TimestampCorrelationMesg(void) : Mesg(Profile::MESG_TIMESTAMP_CORRELATION)
    {
    }

    TimestampCorrelationMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    // Units: s
    // Comment: Whole second part of UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    // Comment: Whole second part of UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns fractional_timestamp field
    // Units: s
    // Comment: Fractional part of the UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetFractionalTimestamp(void) const
    {
        return GetFieldFLOAT32Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set fractional_timestamp field
    // Units: s
    // Comment: Fractional part of the UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    void SetFractionalTimestamp(FIT_FLOAT32 fractionalTimestamp)
    {
        SetFieldFLOAT32Value(0, fractionalTimestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns system_timestamp field
    // Units: s
    // Comment: Whole second part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetSystemTimestamp(void) const
    {
        return GetFieldUINT32Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set system_timestamp field
    // Units: s
    // Comment: Whole second part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetSystemTimestamp(FIT_DATE_TIME systemTimestamp)
    {
        SetFieldUINT32Value(1, systemTimestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns fractional_system_timestamp field
    // Units: s
    // Comment: Fractional part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetFractionalSystemTimestamp(void) const
    {
        return GetFieldFLOAT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set fractional_system_timestamp field
    // Units: s
    // Comment: Fractional part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetFractionalSystemTimestamp(FIT_FLOAT32 fractionalSystemTimestamp)
    {
        SetFieldFLOAT32Value(2, fractionalSystemTimestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns local_timestamp field
    // Units: s
    // Comment: timestamp epoch expressed in local time used to convert timestamps to local time 
    ///////////////////////////////////////////////////////////////////////
    FIT_LOCAL_DATE_TIME GetLocalTimestamp(void) const
    {
        return GetFieldUINT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set local_timestamp field
    // Units: s
    // Comment: timestamp epoch expressed in local time used to convert timestamps to local time 
    ///////////////////////////////////////////////////////////////////////
    void SetLocalTimestamp(FIT_LOCAL_DATE_TIME localTimestamp)
    {
        SetFieldUINT32Value(3, localTimestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTimestampMs(void) const
    {
        return GetFieldUINT16Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    void SetTimestampMs(FIT_UINT16 timestampMs)
    {
        SetFieldUINT16Value(4, timestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns system_timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetSystemTimestampMs(void) const
    {
        return GetFieldUINT16Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set system_timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetSystemTimestampMs(FIT_UINT16 systemTimestampMs)
    {
        SetFieldUINT16Value(5, systemTimestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_TIMESTAMP_CORRELATION_MESG_HPP)