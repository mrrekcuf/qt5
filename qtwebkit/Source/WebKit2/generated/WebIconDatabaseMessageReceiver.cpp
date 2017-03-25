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

#include "WebIconDatabase.h"

#include "ArgumentCoders.h"
#include "DataReference.h"
#include "HandleMessage.h"
#include "MessageDecoder.h"
#include "WebIconDatabaseMessages.h"
#include <wtf/text/WTFString.h>

namespace WebKit {

void WebIconDatabase::didReceiveMessage(CoreIPC::Connection* connection, CoreIPC::MessageDecoder& decoder)
{
    if (decoder.messageName() == Messages::WebIconDatabase::RetainIconForPageURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::RetainIconForPageURL>(decoder, this, &WebIconDatabase::retainIconForPageURL);
        return;
    }
    if (decoder.messageName() == Messages::WebIconDatabase::ReleaseIconForPageURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::ReleaseIconForPageURL>(decoder, this, &WebIconDatabase::releaseIconForPageURL);
        return;
    }
    if (decoder.messageName() == Messages::WebIconDatabase::SetIconURLForPageURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::SetIconURLForPageURL>(decoder, this, &WebIconDatabase::setIconURLForPageURL);
        return;
    }
    if (decoder.messageName() == Messages::WebIconDatabase::SetIconDataForIconURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::SetIconDataForIconURL>(decoder, this, &WebIconDatabase::setIconDataForIconURL);
        return;
    }
    if (decoder.messageName() == Messages::WebIconDatabase::GetLoadDecisionForIconURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::GetLoadDecisionForIconURL>(decoder, this, &WebIconDatabase::getLoadDecisionForIconURL);
        return;
    }
    if (decoder.messageName() == Messages::WebIconDatabase::DidReceiveIconForPageURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::DidReceiveIconForPageURL>(decoder, this, &WebIconDatabase::didReceiveIconForPageURL);
        return;
    }
    UNUSED_PARAM(connection);
    ASSERT_NOT_REACHED();
}

void WebIconDatabase::didReceiveSyncMessage(CoreIPC::Connection* connection, CoreIPC::MessageDecoder& decoder, OwnPtr<CoreIPC::MessageEncoder>& replyEncoder)
{
    if (decoder.messageName() == Messages::WebIconDatabase::SynchronousIconDataForPageURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::SynchronousIconDataForPageURL>(decoder, *replyEncoder, this, &WebIconDatabase::synchronousIconDataForPageURL);
        return;
    }
    if (decoder.messageName() == Messages::WebIconDatabase::SynchronousIconURLForPageURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::SynchronousIconURLForPageURL>(decoder, *replyEncoder, this, &WebIconDatabase::synchronousIconURLForPageURL);
        return;
    }
    if (decoder.messageName() == Messages::WebIconDatabase::SynchronousIconDataKnownForIconURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::SynchronousIconDataKnownForIconURL>(decoder, *replyEncoder, this, &WebIconDatabase::synchronousIconDataKnownForIconURL);
        return;
    }
    if (decoder.messageName() == Messages::WebIconDatabase::SynchronousLoadDecisionForIconURL::name()) {
        CoreIPC::handleMessage<Messages::WebIconDatabase::SynchronousLoadDecisionForIconURL>(decoder, *replyEncoder, this, &WebIconDatabase::synchronousLoadDecisionForIconURL);
        return;
    }
    UNUSED_PARAM(connection);
    ASSERT_NOT_REACHED();
}

} // namespace WebKit
