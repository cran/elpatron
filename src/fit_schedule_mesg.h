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


#if !defined(FIT_SCHEDULE_MESG_HPP)
#define FIT_SCHEDULE_MESG_HPP

#include "fit_mesg.h"

namespace fit
{

class ScheduleMesg : public Mesg
{
public:
    ScheduleMesg(void) : Mesg(Profile::MESG_SCHEDULE)
    {
    }

    ScheduleMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns manufacturer field
    // Comment: Corresponds to file_id of scheduled workout / course.
    ///////////////////////////////////////////////////////////////////////
    FIT_MANUFACTURER GetManufacturer(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set manufacturer field
    // Comment: Corresponds to file_id of scheduled workout / course.
    ///////////////////////////////////////////////////////////////////////
    void SetManufacturer(FIT_MANUFACTURER manufacturer)
    {
        SetFieldUINT16Value(0, manufacturer, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns product field
    // Comment: Corresponds to file_id of scheduled workout / course.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetProduct(void) const
    {
        return GetFieldUINT16Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set product field
    // Comment: Corresponds to file_id of scheduled workout / course.
    ///////////////////////////////////////////////////////////////////////
    void SetProduct(FIT_UINT16 product)
    {
        SetFieldUINT16Value(1, product, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns garmin_product field
    ///////////////////////////////////////////////////////////////////////
    FIT_GARMIN_PRODUCT GetGarminProduct(void) const
    {
        return GetFieldUINT16Value(1, 0, (FIT_UINT16) Profile::SCHEDULE_MESG_PRODUCT_FIELD_GARMIN_PRODUCT);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set garmin_product field
    ///////////////////////////////////////////////////////////////////////
    void SetGarminProduct(FIT_GARMIN_PRODUCT garminProduct)
    {
        SetFieldUINT16Value(1, garminProduct, 0, (FIT_UINT16) Profile::SCHEDULE_MESG_PRODUCT_FIELD_GARMIN_PRODUCT);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns serial_number field
    // Comment: Corresponds to file_id of scheduled workout / course.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32Z GetSerialNumber(void) const
    {
        return GetFieldUINT32ZValue(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set serial_number field
    // Comment: Corresponds to file_id of scheduled workout / course.
    ///////////////////////////////////////////////////////////////////////
    void SetSerialNumber(FIT_UINT32Z serialNumber)
    {
        SetFieldUINT32ZValue(2, serialNumber, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns time_created field
    // Comment: Corresponds to file_id of scheduled workout / course.
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimeCreated(void) const
    {
        return GetFieldUINT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set time_created field
    // Comment: Corresponds to file_id of scheduled workout / course.
    ///////////////////////////////////////////////////////////////////////
    void SetTimeCreated(FIT_DATE_TIME timeCreated)
    {
        SetFieldUINT32Value(3, timeCreated, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns completed field
    // Comment: TRUE if this activity has been started
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetCompleted(void) const
    {
        return GetFieldENUMValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set completed field
    // Comment: TRUE if this activity has been started
    ///////////////////////////////////////////////////////////////////////
    void SetCompleted(FIT_BOOL completed)
    {
        SetFieldENUMValue(4, completed, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns type field
    ///////////////////////////////////////////////////////////////////////
    FIT_SCHEDULE GetType(void) const
    {
        return GetFieldENUMValue(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set type field
    ///////////////////////////////////////////////////////////////////////
    void SetType(FIT_SCHEDULE type)
    {
        SetFieldENUMValue(5, type, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns scheduled_time field
    ///////////////////////////////////////////////////////////////////////
    FIT_LOCAL_DATE_TIME GetScheduledTime(void) const
    {
        return GetFieldUINT32Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set scheduled_time field
    ///////////////////////////////////////////////////////////////////////
    void SetScheduledTime(FIT_LOCAL_DATE_TIME scheduledTime)
    {
        SetFieldUINT32Value(6, scheduledTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_SCHEDULE_MESG_HPP)
