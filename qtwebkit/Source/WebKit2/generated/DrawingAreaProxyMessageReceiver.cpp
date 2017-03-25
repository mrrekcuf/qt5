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

#include "DrawingAreaProxy.h"

#include "DrawingAreaProxyMessages.h"
#include "HandleMessage.h"
#include "LayerTreeContext.h"
#include "MessageDecoder.h"
#include "UpdateInfo.h"
#if PLATFORM(MAC)
#include "WebCoreArgumentCoders.h"
#endif
#if PLATFORM(MAC)
#include <WebCore/IntSize.h>
#endif

namespace WebKit {

void DrawingAreaProxy::didReceiveMessage(CoreIPC::Connection* connection, CoreIPC::MessageDecoder& decoder)
{
    if (decoder.messageName() == Messages::DrawingAreaProxy::Update::name()) {
        CoreIPC::handleMessage<Messages::DrawingAreaProxy::Update>(decoder, this, &DrawingAreaProxy::update);
        return;
    }
    if (decoder.messageName() == Messages::DrawingAreaProxy::DidUpdateBackingStoreState::name()) {
        CoreIPC::handleMessage<Messages::DrawingAreaProxy::DidUpdateBackingStoreState>(decoder, this, &DrawingAreaProxy::didUpdateBackingStoreState);
        return;
    }
#if USE(ACCELERATED_COMPOSITING)
    if (decoder.messageName() == Messages::DrawingAreaProxy::EnterAcceleratedCompositingMode::name()) {
        CoreIPC::handleMessage<Messages::DrawingAreaProxy::EnterAcceleratedCompositingMode>(decoder, this, &DrawingAreaProxy::enterAcceleratedCompositingMode);
        return;
    }
#endif
#if USE(ACCELERATED_COMPOSITING)
    if (decoder.messageName() == Messages::DrawingAreaProxy::ExitAcceleratedCompositingMode::name()) {
        CoreIPC::handleMessage<Messages::DrawingAreaProxy::ExitAcceleratedCompositingMode>(decoder, this, &DrawingAreaProxy::exitAcceleratedCompositingMode);
        return;
    }
#endif
#if USE(ACCELERATED_COMPOSITING)
    if (decoder.messageName() == Messages::DrawingAreaProxy::UpdateAcceleratedCompositingMode::name()) {
        CoreIPC::handleMessage<Messages::DrawingAreaProxy::UpdateAcceleratedCompositingMode>(decoder, this, &DrawingAreaProxy::updateAcceleratedCompositingMode);
        return;
    }
#endif
#if PLATFORM(MAC)
    if (decoder.messageName() == Messages::DrawingAreaProxy::DidUpdateGeometry::name()) {
        CoreIPC::handleMessage<Messages::DrawingAreaProxy::DidUpdateGeometry>(decoder, this, &DrawingAreaProxy::didUpdateGeometry);
        return;
    }
#endif
#if PLATFORM(MAC)
    if (decoder.messageName() == Messages::DrawingAreaProxy::IntrinsicContentSizeDidChange::name()) {
        CoreIPC::handleMessage<Messages::DrawingAreaProxy::IntrinsicContentSizeDidChange>(decoder, this, &DrawingAreaProxy::intrinsicContentSizeDidChange);
        return;
    }
#endif
    UNUSED_PARAM(connection);
    ASSERT_NOT_REACHED();
}

} // namespace WebKit
