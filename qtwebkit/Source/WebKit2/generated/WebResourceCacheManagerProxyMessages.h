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

#ifndef WebResourceCacheManagerProxyMessages_h
#define WebResourceCacheManagerProxyMessages_h

#include "Arguments.h"
#include "MessageEncoder.h"
#include "SecurityOriginData.h"
#include "StringReference.h"
#include <wtf/Vector.h>


namespace Messages {
namespace WebResourceCacheManagerProxy {

static inline CoreIPC::StringReference messageReceiverName()
{
    return CoreIPC::StringReference("WebResourceCacheManagerProxy");
}

struct DidGetCacheOrigins : CoreIPC::Arguments2<const Vector<WebKit::SecurityOriginData>&, uint64_t> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("DidGetCacheOrigins"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments2<const Vector<WebKit::SecurityOriginData>&, uint64_t> DecodeType;
    DidGetCacheOrigins(const Vector<WebKit::SecurityOriginData>& originIdentifiers, uint64_t callbackID)
        : CoreIPC::Arguments2<const Vector<WebKit::SecurityOriginData>&, uint64_t>(originIdentifiers, callbackID)
    {
    }
};

} // namespace WebResourceCacheManagerProxy
} // namespace Messages

#endif // WebResourceCacheManagerProxyMessages_h