//
// File Name:
//
//    WppTrace.h
//
// Abstract:
//
//    WPP tracing definitions.
//

#pragma once



#define WPP_CONTROL_GUIDS WPP_DEFINE_CONTROL_GUID(                                       \
                                DIDFax1RenderFilter,                              \
                                (31b3efac,cda8,466b,85be,dd6fc21eae1f),                  \
                                WPP_DEFINE_BIT(RENDERFILTER_TRACE_ERROR)                 \
                                WPP_DEFINE_BIT(RENDERFILTER_TRACE_WARNING)               \
                                WPP_DEFINE_BIT(RENDERFILTER_TRACE_INFO)                  \
                                WPP_DEFINE_BIT(RENDERFILTER_TRACE_VERBOSE)               \
                                )


