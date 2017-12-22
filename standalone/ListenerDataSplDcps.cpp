#include "ListenerDataSplDcps.h"
#include "ccpp_ListenerData.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__ListenerData_Msg__copyIn(
    c_base base,
    const struct ::ListenerData::Msg *from,
    struct _ListenerData_Msg *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->userID = (c_long)from->userID;
#ifdef OSPL_BOUNDS_CHECK
    if(from->message){
        to->message = c_stringNew_s(base, from->message);
        if(to->message == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ListenerData::Msg.message' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->message = c_stringNew_s(base, from->message);
    if(to->message == NULL) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
    return result;
}

void
__ListenerData_Msg__copyOut(
    const void *_from,
    void *_to)
{
    const struct _ListenerData_Msg *from = (const struct _ListenerData_Msg *)_from;
    struct ::ListenerData::Msg *to = (struct ::ListenerData::Msg *)_to;
    to->userID = (::DDS::Long)from->userID;
    to->message = DDS::string_dup(from->message ? from->message : "");
}

