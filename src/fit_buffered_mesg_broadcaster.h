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



#if !defined(FIT_BUFFERED_MESG_BROADCASTER_HPP)
#define FIT_BUFFERED_MESG_BROADCASTER_HPP

#include "fit_mesg_broadcaster.h"
#include "fit_mesg_broadcast_plugin.h"
#include <vector>


namespace fit
{

class BufferedMesgBroadcaster : public MesgBroadcaster
{
   public:
     void RegisterMesgBroadcastPlugin(MesgBroadcastPlugin* plugin);
     void OnMesg(Mesg& mesg);
     void Broadcast(void);

   private:
     std::vector<Mesg> mesgs;
     std::vector<MesgBroadcastPlugin*> plugins;
};

} // namespace fit

#endif // !defined(FIT_BUFFERED_MESG_BROADCASTER_HPP)
