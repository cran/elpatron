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


#if !defined(FIT_ZONES_TARGET_MESG_HPP)
#define FIT_ZONES_TARGET_MESG_HPP

#include "fit_mesg.h"

namespace fit
{

class ZonesTargetMesg : public Mesg
{
public:
    ZonesTargetMesg(void) : Mesg(Profile::MESG_ZONES_TARGET)
    {
    }

    ZonesTargetMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns max_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetMaxHeartRate(void) const
    {
        return GetFieldUINT8Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set max_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    void SetMaxHeartRate(FIT_UINT8 maxHeartRate)
    {
        SetFieldUINT8Value(1, maxHeartRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns threshold_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetThresholdHeartRate(void) const
    {
        return GetFieldUINT8Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set threshold_heart_rate field
    ///////////////////////////////////////////////////////////////////////
    void SetThresholdHeartRate(FIT_UINT8 thresholdHeartRate)
    {
        SetFieldUINT8Value(2, thresholdHeartRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns functional_threshold_power field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetFunctionalThresholdPower(void) const
    {
        return GetFieldUINT16Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set functional_threshold_power field
    ///////////////////////////////////////////////////////////////////////
    void SetFunctionalThresholdPower(FIT_UINT16 functionalThresholdPower)
    {
        SetFieldUINT16Value(3, functionalThresholdPower, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns hr_calc_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_HR_ZONE_CALC GetHrCalcType(void) const
    {
        return GetFieldENUMValue(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set hr_calc_type field
    ///////////////////////////////////////////////////////////////////////
    void SetHrCalcType(FIT_HR_ZONE_CALC hrCalcType)
    {
        SetFieldENUMValue(5, hrCalcType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns pwr_calc_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_PWR_ZONE_CALC GetPwrCalcType(void) const
    {
        return GetFieldENUMValue(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set pwr_calc_type field
    ///////////////////////////////////////////////////////////////////////
    void SetPwrCalcType(FIT_PWR_ZONE_CALC pwrCalcType)
    {
        SetFieldENUMValue(7, pwrCalcType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_ZONES_TARGET_MESG_HPP)
