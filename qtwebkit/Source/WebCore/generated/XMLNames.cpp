/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009 Apple Inc.  All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
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

#include "config.h"

#ifdef SKIP_STATIC_CONSTRUCTORS_ON_GCC
#define DOM_XMLNAMES_HIDE_GLOBALS 1
#else
#define QNAME_DEFAULT_CONSTRUCTOR 1
#endif

#include "XMLNames.h"

#include <wtf/StaticConstructors.h>
namespace WebCore {

namespace XMLNames {

using namespace WebCore;

DEFINE_GLOBAL(AtomicString, xmlNamespaceURI)

static const LChar spaceString8[] = "space";
static const LChar baseString8[] = "base";
static const LChar langString8[] = "lang";

static StringImpl::StaticASCIILiteral spaceData = {
    StringImpl::StaticASCIILiteral::s_initialRefCount,
    5,
    spaceString8,
    0,
    StringImpl::StaticASCIILiteral::s_initialFlags | (531440 << StringImpl::StaticASCIILiteral::s_hashShift)
};
static StringImpl::StaticASCIILiteral baseData = {
    StringImpl::StaticASCIILiteral::s_initialRefCount,
    4,
    baseString8,
    0,
    StringImpl::StaticASCIILiteral::s_initialFlags | (4376626 << StringImpl::StaticASCIILiteral::s_hashShift)
};
static StringImpl::StaticASCIILiteral langData = {
    StringImpl::StaticASCIILiteral::s_initialRefCount,
    4,
    langString8,
    0,
    StringImpl::StaticASCIILiteral::s_initialFlags | (3702417 << StringImpl::StaticASCIILiteral::s_hashShift)
};

static StringImpl* spaceImpl = reinterpret_cast<StringImpl*>(&spaceData);
static StringImpl* baseImpl = reinterpret_cast<StringImpl*>(&baseData);
static StringImpl* langImpl = reinterpret_cast<StringImpl*>(&langData);


// Attributes
DEFINE_GLOBAL(QualifiedName, baseAttr)
DEFINE_GLOBAL(QualifiedName, langAttr)
DEFINE_GLOBAL(QualifiedName, spaceAttr)


WebCore::QualifiedName** getXMLAttrs()
{
    static WebCore::QualifiedName* XMLAttr[] = {
        (WebCore::QualifiedName*)&baseAttr,
        (WebCore::QualifiedName*)&langAttr,
        (WebCore::QualifiedName*)&spaceAttr,
    };
    return XMLAttr;
}

void init()
{
    static bool initialized = false;
    if (initialized)
        return;
    initialized = true;

    // Use placement new to initialize the globals.

    AtomicString::init();
    AtomicString xmlNS("http://www.w3.org/XML/1998/namespace", AtomicString::ConstructFromLiteral);

    // Namespace
    new (NotNull, (void*)&xmlNamespaceURI) AtomicString(xmlNS);

#ifndef NDEBUG
    langImpl->assertHashIsCorrect();
    spaceImpl->assertHashIsCorrect();
    baseImpl->assertHashIsCorrect();
#endif // NDEBUG

    // Attributes
    createQualifiedName((void*)&baseAttr, baseImpl, xmlNS);
    createQualifiedName((void*)&langAttr, langImpl, xmlNS);
    createQualifiedName((void*)&spaceAttr, spaceImpl, xmlNS);
}

} }
