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

#if ENABLE(PLUGIN_PROCESS)

#include "NPObjectMessageReceiver.h"

#include "ArgumentCoders.h"
#include "HandleMessage.h"
#include "MessageDecoder.h"
#include "NPIdentifierData.h"
#include "NPObjectMessageReceiverMessages.h"
#include "NPVariantData.h"
#include <wtf/Vector.h>

namespace WebKit {


void NPObjectMessageReceiver::didReceiveSyncNPObjectMessageReceiverMessage(CoreIPC::Connection*, CoreIPC::MessageDecoder& decoder, OwnPtr<CoreIPC::MessageEncoder>& replyEncoder)
{
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::Deallocate::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::Deallocate>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::deallocate);
        return;
    }
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::HasMethod::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::HasMethod>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::hasMethod);
        return;
    }
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::Invoke::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::Invoke>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::invoke);
        return;
    }
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::InvokeDefault::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::InvokeDefault>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::invokeDefault);
        return;
    }
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::HasProperty::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::HasProperty>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::hasProperty);
        return;
    }
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::GetProperty::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::GetProperty>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::getProperty);
        return;
    }
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::SetProperty::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::SetProperty>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::setProperty);
        return;
    }
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::RemoveProperty::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::RemoveProperty>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::removeProperty);
        return;
    }
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::Enumerate::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::Enumerate>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::enumerate);
        return;
    }
    if (decoder.messageName() == Messages::NPObjectMessageReceiver::Construct::name()) {
        CoreIPC::handleMessage<Messages::NPObjectMessageReceiver::Construct>(decoder, *replyEncoder, this, &NPObjectMessageReceiver::construct);
        return;
    }
    ASSERT_NOT_REACHED();
}

} // namespace WebKit

#endif // ENABLE(PLUGIN_PROCESS)
