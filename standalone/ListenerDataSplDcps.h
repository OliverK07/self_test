#ifndef LISTENERDATASPLTYPES_H
#define LISTENERDATASPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ListenerData.h"


extern c_metaObject __ListenerData_ListenerData__load (c_base base);

extern const char *ListenerData_Msg_metaDescriptor[];
extern const int ListenerData_Msg_metaDescriptorArrLength;
extern const int ListenerData_Msg_metaDescriptorLength;
extern c_metaObject __ListenerData_Msg__load (c_base base);
struct _ListenerData_Msg ;
extern  v_copyin_result __ListenerData_Msg__copyIn(c_base base, const struct ListenerData::Msg *from, struct _ListenerData_Msg *to);
extern  void __ListenerData_Msg__copyOut(const void *_from, void *_to);
struct _ListenerData_Msg {
    c_long userID;
    c_string message;
};

#undef OS_API
#endif
