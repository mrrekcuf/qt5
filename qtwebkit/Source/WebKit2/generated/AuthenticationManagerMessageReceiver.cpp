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

#include "AuthenticationManager.h"

#include "AuthenticationManagerMessages.h"
#include "HandleMessage.h"
#include "MessageDecoder.h"
#include "PlatformCertificateInfo.h"
#include "WebCoreArgumentCoders.h"
#include <WebCore/Credential.h>

namespace WebKit {

void AuthenticationManager::didReceiveMessage(CoreIPC::Connection* connection, CoreIPC::MessageDecoder& decoder)
{
    if (decoder.messageName() == Messages::AuthenticationManager::UseCredentialForChallenge::name()) {
        CoreIPC::handleMessage<Messages::AuthenticationManager::UseCredentialForChallenge>(decoder, this, &AuthenticationManager::useCredentialForChallenge);
        return;
    }
    if (decoder.messageName() == Messages::AuthenticationManager::ContinueWithoutCredentialForChallenge::name()) {
        CoreIPC::handleMessage<Messages::AuthenticationManager::ContinueWithoutCredentialForChallenge>(decoder, this, &AuthenticationManager::continueWithoutCredentialForChallenge);
        return;
    }
    if (decoder.messageName() == Messages::AuthenticationManager::CancelChallenge::name()) {
        CoreIPC::handleMessage<Messages::AuthenticationManager::CancelChallenge>(decoder, this, &AuthenticationManager::cancelChallenge);
        return;
    }
    UNUSED_PARAM(connection);
    ASSERT_NOT_REACHED();
}

} // namespace WebKit
