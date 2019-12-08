/**********************************************************************

Audacity: A Digital Audio Editor

HitTestResult.h

Paul Licameli

**********************************************************************/

#ifndef __AUDACITY_HIT_TEST_RESULT__
#define __AUDACITY_HIT_TEST_RESULT__

#include "MemoryX.h"
#include "Internat.h" // for TranslatableString

class wxCursor;

struct HitTestPreview
{
   HitTestPreview()
   {}

   HitTestPreview(const wxString &message_, wxCursor *cursor_,
      const TranslatableString &tooltip_ = {})
      : message(message_), cursor(cursor_), tooltip{ tooltip_ }
   {}

   wxString message {};
   wxCursor *cursor {};
   TranslatableString tooltip{};
};

#endif
