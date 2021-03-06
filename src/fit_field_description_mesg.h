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


#if !defined(FIT_FIELD_DESCRIPTION_MESG_HPP)
#define FIT_FIELD_DESCRIPTION_MESG_HPP

#include "fit_mesg.h"

namespace fit
{

class FieldDescriptionMesg : public Mesg
{
public:
    FieldDescriptionMesg(void) : Mesg(Profile::MESG_FIELD_DESCRIPTION)
    {
    }

    FieldDescriptionMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns developer_data_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetDeveloperDataIndex(void) const
    {
        return GetFieldUINT8Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set developer_data_index field
    ///////////////////////////////////////////////////////////////////////
    void SetDeveloperDataIndex(FIT_UINT8 developerDataIndex)
    {
        SetFieldUINT8Value(0, developerDataIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns field_definition_number field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetFieldDefinitionNumber(void) const
    {
        return GetFieldUINT8Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set field_definition_number field
    ///////////////////////////////////////////////////////////////////////
    void SetFieldDefinitionNumber(FIT_UINT8 fieldDefinitionNumber)
    {
        SetFieldUINT8Value(1, fieldDefinitionNumber, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns fit_base_type_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_FIT_BASE_TYPE GetFitBaseTypeId(void) const
    {
        return GetFieldUINT8Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set fit_base_type_id field
    ///////////////////////////////////////////////////////////////////////
    void SetFitBaseTypeId(FIT_FIT_BASE_TYPE fitBaseTypeId)
    {
        SetFieldUINT8Value(2, fitBaseTypeId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of field_name
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumFieldName(void) const
    {
        return GetFieldNumValues(3, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns field_name field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetFieldName(FIT_UINT8 index) const
    {
        return GetFieldSTRINGValue(3, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set field_name field
    ///////////////////////////////////////////////////////////////////////
    void SetFieldName(FIT_UINT8 index, FIT_WSTRING fieldName)
    {
        SetFieldSTRINGValue(3, fieldName, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns array field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetArray(void) const
    {
        return GetFieldUINT8Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set array field
    ///////////////////////////////////////////////////////////////////////
    void SetArray(FIT_UINT8 array)
    {
        SetFieldUINT8Value(4, array, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns components field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetComponents(void) const
    {
        return GetFieldSTRINGValue(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set components field
    ///////////////////////////////////////////////////////////////////////
    void SetComponents(FIT_WSTRING components)
    {
        SetFieldSTRINGValue(5, components, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns scale field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetScale(void) const
    {
        return GetFieldUINT8Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set scale field
    ///////////////////////////////////////////////////////////////////////
    void SetScale(FIT_UINT8 scale)
    {
        SetFieldUINT8Value(6, scale, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns offset field
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT8 GetOffset(void) const
    {
        return GetFieldSINT8Value(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set offset field
    ///////////////////////////////////////////////////////////////////////
    void SetOffset(FIT_SINT8 offset)
    {
        SetFieldSINT8Value(7, offset, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of units
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumUnits(void) const
    {
        return GetFieldNumValues(8, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns units field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetUnits(FIT_UINT8 index) const
    {
        return GetFieldSTRINGValue(8, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set units field
    ///////////////////////////////////////////////////////////////////////
    void SetUnits(FIT_UINT8 index, FIT_WSTRING units)
    {
        SetFieldSTRINGValue(8, units, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bits field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetBits(void) const
    {
        return GetFieldSTRINGValue(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bits field
    ///////////////////////////////////////////////////////////////////////
    void SetBits(FIT_WSTRING bits)
    {
        SetFieldSTRINGValue(9, bits, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns accumulate field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetAccumulate(void) const
    {
        return GetFieldSTRINGValue(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set accumulate field
    ///////////////////////////////////////////////////////////////////////
    void SetAccumulate(FIT_WSTRING accumulate)
    {
        SetFieldSTRINGValue(10, accumulate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns fit_base_unit_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_FIT_BASE_UNIT GetFitBaseUnitId(void) const
    {
        return GetFieldUINT16Value(13, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set fit_base_unit_id field
    ///////////////////////////////////////////////////////////////////////
    void SetFitBaseUnitId(FIT_FIT_BASE_UNIT fitBaseUnitId)
    {
        SetFieldUINT16Value(13, fitBaseUnitId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_FIELD_DESCRIPTION_MESG_HPP)
