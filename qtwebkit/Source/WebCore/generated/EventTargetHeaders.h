/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * Copyright (C) 2011 Google Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY GOOGLE, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef EventTargetHeaders_h
#define EventTargetHeaders_h

#if ENABLE(WEB_AUDIO)
#include "AudioContext.h"
#include "JSAudioContext.h"
#endif
#if ENABLE(WEB_AUDIO)
#include "AudioNode.h"
#include "JSAudioNode.h"
#endif
#if ENABLE(VIDEO_TRACK)
#include "AudioTrackList.h"
#include "JSAudioTrackList.h"
#endif
#if ENABLE(BATTERY_STATUS)
#include "BatteryManager.h"
#include "JSBatteryManager.h"
#endif
#include "DOMApplicationCache.h"
#include "JSDOMApplicationCache.h"
#include "DOMWindow.h"
#include "JSDOMWindow.h"
#if ENABLE(WORKERS)
#include "DedicatedWorkerGlobalScope.h"
#include "JSDedicatedWorkerGlobalScope.h"
#endif
#include "EventSource.h"
#include "JSEventSource.h"
#if ENABLE(BLOB)
#include "FileReader.h"
#include "JSFileReader.h"
#endif
#if ENABLE(FILE_SYSTEM)
#include "FileWriter.h"
#include "JSFileWriter.h"
#endif
#if ENABLE(FONT_LOAD_EVENTS)
#include "FontLoader.h"
#include "JSFontLoader.h"
#endif
#if ENABLE(INDEXED_DATABASE)
#include "IDBDatabase.h"
#include "JSIDBDatabase.h"
#endif
#if ENABLE(INDEXED_DATABASE)
#include "IDBOpenDBRequest.h"
#include "JSIDBOpenDBRequest.h"
#endif
#if ENABLE(INDEXED_DATABASE)
#include "IDBRequest.h"
#include "JSIDBRequest.h"
#endif
#if ENABLE(INDEXED_DATABASE)
#include "IDBTransaction.h"
#include "JSIDBTransaction.h"
#endif
#if ENABLE(MEDIA_STREAM)
#include "LocalMediaStream.h"
#include "JSLocalMediaStream.h"
#endif
#if ENABLE(VIDEO)
#include "MediaController.h"
#include "JSMediaController.h"
#endif
#if ENABLE(ENCRYPTED_MEDIA_V2)
#include "MediaKeySession.h"
#include "JSMediaKeySession.h"
#endif
#if ENABLE(MEDIA_SOURCE)
#include "MediaSource.h"
#include "JSMediaSource.h"
#endif
#if ENABLE(MEDIA_STREAM)
#include "MediaStream.h"
#include "JSMediaStream.h"
#endif
#if ENABLE(MEDIA_STREAM)
#include "MediaStreamTrack.h"
#include "JSMediaStreamTrack.h"
#endif
#include "MessagePort.h"
#include "JSMessagePort.h"
#if ENABLE(NETWORK_INFO)
#include "NetworkInfoConnection.h"
#include "JSNetworkInfoConnection.h"
#endif
#include "Node.h"
#include "JSNode.h"
#if ENABLE(NOTIFICATIONS) || ENABLE(LEGACY_NOTIFICATIONS)
#include "Notification.h"
#include "JSNotification.h"
#endif
#if ENABLE(WEB_TIMING)
#include "Performance.h"
#include "JSPerformance.h"
#endif
#if ENABLE(MEDIA_STREAM)
#include "RTCDTMFSender.h"
#include "JSRTCDTMFSender.h"
#endif
#if ENABLE(MEDIA_STREAM)
#include "RTCDataChannel.h"
#include "JSRTCDataChannel.h"
#endif
#if ENABLE(MEDIA_STREAM)
#include "RTCPeerConnection.h"
#include "JSRTCPeerConnection.h"
#endif
#if ENABLE(SVG)
#include "SVGElementInstance.h"
#include "JSSVGElementInstance.h"
#endif
#if ENABLE(SHARED_WORKERS)
#include "SharedWorker.h"
#include "JSSharedWorker.h"
#endif
#if ENABLE(SHARED_WORKERS)
#include "SharedWorkerGlobalScope.h"
#include "JSSharedWorkerGlobalScope.h"
#endif
#if ENABLE(MEDIA_SOURCE)
#include "SourceBufferList.h"
#include "JSSourceBufferList.h"
#endif
#if ENABLE(SCRIPTED_SPEECH)
#include "SpeechRecognition.h"
#include "JSSpeechRecognition.h"
#endif
#if ENABLE(SPEECH_SYNTHESIS)
#include "SpeechSynthesisUtterance.h"
#include "JSSpeechSynthesisUtterance.h"
#endif
#if ENABLE(VIDEO_TRACK)
#include "TextTrack.h"
#include "JSTextTrack.h"
#endif
#if ENABLE(VIDEO_TRACK)
#include "TextTrackCue.h"
#include "JSTextTrackCue.h"
#endif
#if ENABLE(VIDEO_TRACK)
#include "TextTrackList.h"
#include "JSTextTrackList.h"
#endif
#if ENABLE(VIDEO_TRACK)
#include "VideoTrackList.h"
#include "JSVideoTrackList.h"
#endif
#include "WebKitNamedFlow.h"
#include "JSWebKitNamedFlow.h"
#if ENABLE(WEB_SOCKETS)
#include "WebSocket.h"
#include "JSWebSocket.h"
#endif
#if ENABLE(WORKERS)
#include "Worker.h"
#include "JSWorker.h"
#endif
#include "XMLHttpRequest.h"
#include "JSXMLHttpRequest.h"
#include "XMLHttpRequestUpload.h"
#include "JSXMLHttpRequestUpload.h"

#endif // EventTargetHeaders_h
