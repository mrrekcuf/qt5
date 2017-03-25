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

#ifndef PluginProcessProxyMessages_h
#define PluginProcessProxyMessages_h

#if ENABLE(PLUGIN_PROCESS)

#include "Arguments.h"
#include "MessageEncoder.h"
#include "StringReference.h"
#include <wtf/Vector.h>
#include <wtf/text/WTFString.h>

namespace CoreIPC {
    class Attachment;
}

namespace WTF {
    class String;
}

namespace Messages {
namespace PluginProcessProxy {

static inline CoreIPC::StringReference messageReceiverName()
{
    return CoreIPC::StringReference("PluginProcessProxy");
}

struct DidCreateWebProcessConnection : CoreIPC::Arguments2<const CoreIPC::Attachment&, bool> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("DidCreateWebProcessConnection"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments2<const CoreIPC::Attachment&, bool> DecodeType;
    DidCreateWebProcessConnection(const CoreIPC::Attachment& connectionIdentifier, bool supportsAsynchronousPluginInitialization)
        : CoreIPC::Arguments2<const CoreIPC::Attachment&, bool>(connectionIdentifier, supportsAsynchronousPluginInitialization)
    {
    }
};

struct DidGetSitesWithData : CoreIPC::Arguments2<const Vector<WTF::String>&, uint64_t> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("DidGetSitesWithData"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments2<const Vector<WTF::String>&, uint64_t> DecodeType;
    DidGetSitesWithData(const Vector<WTF::String>& sites, uint64_t callbackID)
        : CoreIPC::Arguments2<const Vector<WTF::String>&, uint64_t>(sites, callbackID)
    {
    }
};

struct DidClearSiteData : CoreIPC::Arguments1<uint64_t> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("DidClearSiteData"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments1<uint64_t> DecodeType;
    explicit DidClearSiteData(uint64_t callbackID)
        : CoreIPC::Arguments1<uint64_t>(callbackID)
    {
    }
};

#if PLATFORM(MAC)
struct SetModalWindowIsShowing : CoreIPC::Arguments1<bool> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("SetModalWindowIsShowing"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments1<bool> DecodeType;
    explicit SetModalWindowIsShowing(bool modalWindowIsShowing)
        : CoreIPC::Arguments1<bool>(modalWindowIsShowing)
    {
    }
};
#endif

#if PLATFORM(MAC)
struct SetFullscreenWindowIsShowing : CoreIPC::Arguments1<bool> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("SetFullscreenWindowIsShowing"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments1<bool> DecodeType;
    explicit SetFullscreenWindowIsShowing(bool fullscreenWindowIsShowing)
        : CoreIPC::Arguments1<bool>(fullscreenWindowIsShowing)
    {
    }
};
#endif

#if PLATFORM(MAC)
struct OpenPluginPreferencePane : CoreIPC::Arguments0 {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("OpenPluginPreferencePane"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments0 DecodeType;
};
#endif

#if PLATFORM(MAC)
struct LaunchProcess : CoreIPC::Arguments2<const WTF::String&, const Vector<WTF::String>&> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("LaunchProcess"); }
    static const bool isSync = true;

    typedef CoreIPC::Arguments1<bool&> Reply;
    typedef CoreIPC::Arguments2<const WTF::String&, const Vector<WTF::String>&> DecodeType;
    LaunchProcess(const WTF::String& launchPath, const Vector<WTF::String>& arguments)
        : CoreIPC::Arguments2<const WTF::String&, const Vector<WTF::String>&>(launchPath, arguments)
    {
    }
};
#endif

#if PLATFORM(MAC)
struct LaunchApplicationAtURL : CoreIPC::Arguments2<const WTF::String&, const Vector<WTF::String>&> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("LaunchApplicationAtURL"); }
    static const bool isSync = true;

    typedef CoreIPC::Arguments1<bool&> Reply;
    typedef CoreIPC::Arguments2<const WTF::String&, const Vector<WTF::String>&> DecodeType;
    LaunchApplicationAtURL(const WTF::String& url, const Vector<WTF::String>& arguments)
        : CoreIPC::Arguments2<const WTF::String&, const Vector<WTF::String>&>(url, arguments)
    {
    }
};
#endif

#if PLATFORM(MAC)
struct OpenURL : CoreIPC::Arguments1<const WTF::String&> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("OpenURL"); }
    static const bool isSync = true;

    typedef CoreIPC::Arguments3<bool&, int32_t&, WTF::String&> Reply;
    typedef CoreIPC::Arguments1<const WTF::String&> DecodeType;
    explicit OpenURL(const WTF::String& urlString)
        : CoreIPC::Arguments1<const WTF::String&>(urlString)
    {
    }
};
#endif

} // namespace PluginProcessProxy
} // namespace Messages

#endif // ENABLE(PLUGIN_PROCESS)

#endif // PluginProcessProxyMessages_h
