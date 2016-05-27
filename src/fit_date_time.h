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


#if !defined(FIT_DATE_TIME_HPP)
#define FIT_DATE_TIME_HPP

#include <ctime>
#include <cmath>
#include "fit_profile.h"
namespace fit
{

class DateTime
{
   public:
      DateTime(time_t timeStamp);
      DateTime(FIT_DATE_TIME timeStamp);
      DateTime(FIT_DATE_TIME timeStamp, FIT_FLOAT64 fractionalTimeStamp);
      DateTime(const DateTime& dateTime);
      bool Equals(DateTime dateTime);
      FIT_DATE_TIME GetTimeStamp();
      FIT_FLOAT64 GetFractionalTimestamp();
      void add(DateTime dateTime);
      void add(FIT_DATE_TIME timestamp);
      void add(double fractional_timestamp);
      time_t GetTimeT();
      void ConvertSystemTimeToUTC(long offset);
      int CompareTo(DateTime t1);

   private:
      FIT_DATE_TIME timeStamp;
      FIT_FLOAT64 fractionalTimeStamp;
      static const time_t systemTimeOffset = 631065600; // Needed for conversion from UNIX time to FIT time
};

} // namespace fit

#endif // !defined(FIT_DATE_TIME_HPP)
