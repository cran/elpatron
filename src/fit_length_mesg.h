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


#if !defined(FIT_LENGTH_MESG_HPP)
#define FIT_LENGTH_MESG_HPP

#include "fit_mesg.h"
#include "fit_mesg_with_event.h"

namespace fit
{

class LengthMesg : public Mesg, public MesgWithEvent
{
public:
    LengthMesg(void) : Mesg(Profile::MESG_LENGTH)
    {
    }

    LengthMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns message_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESSAGE_INDEX GetMessageIndex(void) const
    {
        return GetFieldUINT16Value(254, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set message_index field
    ///////////////////////////////////////////////////////////////////////
    void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
    {
        SetFieldUINT16Value(254, messageIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns event field
    ///////////////////////////////////////////////////////////////////////
    FIT_EVENT GetEvent(void) const
    {
        return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set event field
    ///////////////////////////////////////////////////////////////////////
    void SetEvent(FIT_EVENT event)
    {
        SetFieldENUMValue(0, event, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns event_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_EVENT_TYPE GetEventType(void) const
    {
        return GetFieldENUMValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set event_type field
    ///////////////////////////////////////////////////////////////////////
    void SetEventType(FIT_EVENT_TYPE eventType)
    {
        SetFieldENUMValue(1, eventType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns start_time field
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetStartTime(void) const
    {
        return GetFieldUINT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set start_time field
    ///////////////////////////////////////////////////////////////////////
    void SetStartTime(FIT_DATE_TIME startTime)
    {
        SetFieldUINT32Value(2, startTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_elapsed_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTotalElapsedTime(void) const
    {
        return GetFieldFLOAT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_elapsed_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTotalElapsedTime(FIT_FLOAT32 totalElapsedTime)
    {
        SetFieldFLOAT32Value(3, totalElapsedTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_timer_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTotalTimerTime(void) const
    {
        return GetFieldFLOAT32Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_timer_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTotalTimerTime(FIT_FLOAT32 totalTimerTime)
    {
        SetFieldFLOAT32Value(4, totalTimerTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_strokes field
    // Units: strokes
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTotalStrokes(void) const
    {
        return GetFieldUINT16Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_strokes field
    // Units: strokes
    ///////////////////////////////////////////////////////////////////////
    void SetTotalStrokes(FIT_UINT16 totalStrokes)
    {
        SetFieldUINT16Value(5, totalStrokes, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAvgSpeed(void) const
    {
        return GetFieldFLOAT32Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    void SetAvgSpeed(FIT_FLOAT32 avgSpeed)
    {
        SetFieldFLOAT32Value(6, avgSpeed, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns swim_stroke field
    // Units: swim_stroke
    ///////////////////////////////////////////////////////////////////////
    FIT_SWIM_STROKE GetSwimStroke(void) const
    {
        return GetFieldENUMValue(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set swim_stroke field
    // Units: swim_stroke
    ///////////////////////////////////////////////////////////////////////
    void SetSwimStroke(FIT_SWIM_STROKE swimStroke)
    {
        SetFieldENUMValue(7, swimStroke, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_swimming_cadence field
    // Units: strokes/min
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetAvgSwimmingCadence(void) const
    {
        return GetFieldUINT8Value(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_swimming_cadence field
    // Units: strokes/min
    ///////////////////////////////////////////////////////////////////////
    void SetAvgSwimmingCadence(FIT_UINT8 avgSwimmingCadence)
    {
        SetFieldUINT8Value(9, avgSwimmingCadence, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns event_group field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetEventGroup(void) const
    {
        return GetFieldUINT8Value(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set event_group field
    ///////////////////////////////////////////////////////////////////////
    void SetEventGroup(FIT_UINT8 eventGroup)
    {
        SetFieldUINT8Value(10, eventGroup, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_calories field
    // Units: kcal
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTotalCalories(void) const
    {
        return GetFieldUINT16Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_calories field
    // Units: kcal
    ///////////////////////////////////////////////////////////////////////
    void SetTotalCalories(FIT_UINT16 totalCalories)
    {
        SetFieldUINT16Value(11, totalCalories, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns length_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_LENGTH_TYPE GetLengthType(void) const
    {
        return GetFieldENUMValue(12, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set length_type field
    ///////////////////////////////////////////////////////////////////////
    void SetLengthType(FIT_LENGTH_TYPE lengthType)
    {
        SetFieldENUMValue(12, lengthType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns player_score field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetPlayerScore(void) const
    {
        return GetFieldUINT16Value(18, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set player_score field
    ///////////////////////////////////////////////////////////////////////
    void SetPlayerScore(FIT_UINT16 playerScore)
    {
        SetFieldUINT16Value(18, playerScore, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns opponent_score field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetOpponentScore(void) const
    {
        return GetFieldUINT16Value(19, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set opponent_score field
    ///////////////////////////////////////////////////////////////////////
    void SetOpponentScore(FIT_UINT16 opponentScore)
    {
        SetFieldUINT16Value(19, opponentScore, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of stroke_count
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumStrokeCount(void) const
    {
        return GetFieldNumValues(20, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns stroke_count field
    // Units: counts
    // Comment: stroke_type enum used as the index
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetStrokeCount(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(20, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set stroke_count field
    // Units: counts
    // Comment: stroke_type enum used as the index
    ///////////////////////////////////////////////////////////////////////
    void SetStrokeCount(FIT_UINT8 index, FIT_UINT16 strokeCount)
    {
        SetFieldUINT16Value(20, strokeCount, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of zone_count
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumZoneCount(void) const
    {
        return GetFieldNumValues(21, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns zone_count field
    // Units: counts
    // Comment: zone number used as the index
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetZoneCount(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(21, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set zone_count field
    // Units: counts
    // Comment: zone number used as the index
    ///////////////////////////////////////////////////////////////////////
    void SetZoneCount(FIT_UINT8 index, FIT_UINT16 zoneCount)
    {
        SetFieldUINT16Value(21, zoneCount, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_LENGTH_MESG_HPP)
