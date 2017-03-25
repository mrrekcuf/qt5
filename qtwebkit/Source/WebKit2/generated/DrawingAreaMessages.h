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

#ifndef DrawingAreaMessages_h
#define DrawingAreaMessages_h

#include "Arguments.h"
#include "MessageEncoder.h"
#include "StringReference.h"

namespace WebCore {
    class IntSize;
}

namespace WebKit {
    struct ColorSpaceData;
}

namespace Messages {
namespace DrawingArea {

static inline CoreIPC::StringReference messageReceiverName()
{
    return CoreIPC::StringReference("DrawingArea");
}

struct UpdateBackingStoreState : CoreIPC::Arguments5<uint64_t, bool, float, const WebCore::IntSize&, const WebCore::IntSize&> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("UpdateBackingStoreState"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments5<uint64_t, bool, float, const WebCore::IntSize&, const WebCore::IntSize&> DecodeType;
    UpdateBackingStoreState(uint64_t backingStoreStateID, bool respondImmediately, float deviceScaleFactor, const WebCore::IntSize& size, const WebCore::IntSize& scrollOffset)
        : CoreIPC::Arguments5<uint64_t, bool, float, const WebCore::IntSize&, const WebCore::IntSize&>(backingStoreStateID, respondImmediately, deviceScaleFactor, size, scrollOffset)
    {
    }
};

struct DidUpdate : CoreIPC::Arguments0 {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("DidUpdate"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments0 DecodeType;
};

struct SuspendPainting : CoreIPC::Arguments0 {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("SuspendPainting"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments0 DecodeType;
};

struct ResumePainting : CoreIPC::Arguments0 {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("ResumePainting"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments0 DecodeType;
};

struct SetLayerHostingMode : CoreIPC::Arguments1<uint32_t> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("SetLayerHostingMode"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments1<uint32_t> DecodeType;
    explicit SetLayerHostingMode(uint32_t layerHostingMode)
        : CoreIPC::Arguments1<uint32_t>(layerHostingMode)
    {
    }
};

#if PLATFORM(MAC)
struct UpdateGeometry : CoreIPC::Arguments2<const WebCore::IntSize&, const WebCore::IntSize&> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("UpdateGeometry"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments2<const WebCore::IntSize&, const WebCore::IntSize&> DecodeType;
    UpdateGeometry(const WebCore::IntSize& viewSize, const WebCore::IntSize& layerPosition)
        : CoreIPC::Arguments2<const WebCore::IntSize&, const WebCore::IntSize&>(viewSize, layerPosition)
    {
    }
};
#endif

#if PLATFORM(MAC)
struct SetDeviceScaleFactor : CoreIPC::Arguments1<float> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("SetDeviceScaleFactor"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments1<float> DecodeType;
    explicit SetDeviceScaleFactor(float deviceScaleFactor)
        : CoreIPC::Arguments1<float>(deviceScaleFactor)
    {
    }
};
#endif

#if PLATFORM(MAC)
struct SetColorSpace : CoreIPC::Arguments1<const WebKit::ColorSpaceData&> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("SetColorSpace"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments1<const WebKit::ColorSpaceData&> DecodeType;
    explicit SetColorSpace(const WebKit::ColorSpaceData& colorSpace)
        : CoreIPC::Arguments1<const WebKit::ColorSpaceData&>(colorSpace)
    {
    }
};
#endif

} // namespace DrawingArea
} // namespace Messages

#endif // DrawingAreaMessages_h
