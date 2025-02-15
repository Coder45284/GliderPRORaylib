//============================================================================
//----------------------------------------------------------------------------
//                                 RectUtils.h
//----------------------------------------------------------------------------
//============================================================================

#ifndef GPRO_RECT_UTILS_H
#define GPRO_RECT_UTILS_H

#include "GliderTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

// #include <Quickdraw.h> // Old Mac reference

// void FrameWHRect (SInt16, SInt16, SInt16, SInt16); // Unused thus removed
void NormalizeRect (Rect *);
void ZeroRectCorner (Rect *);
void CenterRectOnPoint (Rect *, Point);
SInt16 HalfRectWide (Rect *);
SInt16 HalfRectTall (Rect *);
SInt16 RectWide (Rect *);
SInt16 RectTall (Rect *);
// void GlobalToLocalRect (Rect *); // Unused thus removed
void LocalToGlobalRect (Rect *);
void CenterRectInRect (Rect *, Rect *);
void HOffsetRect (Rect *, SInt16);
void VOffsetRect (Rect *, SInt16);
Boolean IsRectLeftOfRect (Rect *, Rect *);
void QOffsetRect (Rect *, SInt16, SInt16);
void QSetRect (Rect *, SInt16, SInt16, SInt16, SInt16);
Boolean ForceRectInRect (Rect *, Rect *);
void QUnionSimilarRect (Rect *, Rect *, Rect *);
// void FrameRectSansCorners (Rect *); // Unused thus removed
// void SetEraseRect (SInt16, SInt16, SInt16, SInt16); // Unused and not implemented.

#ifdef __cplusplus
}
#endif

#endif // GPRO_RECT_UTILS_H
