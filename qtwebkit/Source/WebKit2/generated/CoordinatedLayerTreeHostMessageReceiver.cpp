/*
 * Copyright (C) 2010 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"

#if USE(COORDINATED_GRAPHICS)

#include "CoordinatedLayerTreeHost.h"

#include "CoordinatedLayerTreeHostMessages.h"
#include "HandleMessage.h"
#include "MessageDecoder.h"
#include "WebCoreArgumentCoders.h"
#include <WebCore/FloatPoint.h>
#include <WebCore/FloatRect.h>
#include <WebCore/IntSize.h>

namespace WebKit {

void CoordinatedLayerTreeHost::didReceiveCoordinatedLayerTreeHostMessage(CoreIPC::Connection*, CoreIPC::MessageDecoder& decoder)
{
    if (decoder.messageName() == Messages::CoordinatedLayerTreeHost::SetVisibleContentsRect::name()) {
        CoreIPC::handleMessage<Messages::CoordinatedLayerTreeHost::SetVisibleContentsRect>(decoder, this, &CoordinatedLayerTreeHost::setVisibleContentsRect);
        return;
    }
    if (decoder.messageName() == Messages::CoordinatedLayerTreeHost::RenderNextFrame::name()) {
        CoreIPC::handleMessage<Messages::CoordinatedLayerTreeHost::RenderNextFrame>(decoder, this, &CoordinatedLayerTreeHost::renderNextFrame);
        return;
    }
    if (decoder.messageName() == Messages::CoordinatedLayerTreeHost::PurgeBackingStores::name()) {
        CoreIPC::handleMessage<Messages::CoordinatedLayerTreeHost::PurgeBackingStores>(decoder, this, &CoordinatedLayerTreeHost::purgeBackingStores);
        return;
    }
    if (decoder.messageName() == Messages::CoordinatedLayerTreeHost::CommitScrollOffset::name()) {
        CoreIPC::handleMessage<Messages::CoordinatedLayerTreeHost::CommitScrollOffset>(decoder, this, &CoordinatedLayerTreeHost::commitScrollOffset);
        return;
    }
    ASSERT_NOT_REACHED();
}

} // namespace WebKit

#endif // USE(COORDINATED_GRAPHICS)
