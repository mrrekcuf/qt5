/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSEXTDrawBuffers_h
#define JSEXTDrawBuffers_h

#if ENABLE(WEBGL)

#include "EXTDrawBuffers.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSEXTDrawBuffers : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSEXTDrawBuffers* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<EXTDrawBuffers> impl)
    {
        JSEXTDrawBuffers* ptr = new (NotNull, JSC::allocateCell<JSEXTDrawBuffers>(globalObject->vm().heap)) JSEXTDrawBuffers(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static void destroy(JSC::JSCell*);
    ~JSEXTDrawBuffers();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    EXTDrawBuffers* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    EXTDrawBuffers* m_impl;
protected:
    JSEXTDrawBuffers(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<EXTDrawBuffers>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSEXTDrawBuffersOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, EXTDrawBuffers*)
{
    DEFINE_STATIC_LOCAL(JSEXTDrawBuffersOwner, jsEXTDrawBuffersOwner, ());
    return &jsEXTDrawBuffersOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, EXTDrawBuffers*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, EXTDrawBuffers*);
EXTDrawBuffers* toEXTDrawBuffers(JSC::JSValue);

class JSEXTDrawBuffersPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSEXTDrawBuffersPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSEXTDrawBuffersPrototype* ptr = new (NotNull, JSC::allocateCell<JSEXTDrawBuffersPrototype>(vm.heap)) JSEXTDrawBuffersPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSEXTDrawBuffersPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsEXTDrawBuffersPrototypeFunctionDrawBuffersEXT(JSC::ExecState*);
// Constants

JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT0_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT1_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT2_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT3_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT4_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT5_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT6_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT7_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT8_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT9_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT10_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT11_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT12_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT13_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT14_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersCOLOR_ATTACHMENT15_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER0_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER1_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER2_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER3_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER4_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER5_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER6_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER7_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER8_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER9_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER10_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER11_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER12_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER13_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER14_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersDRAW_BUFFER15_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersMAX_COLOR_ATTACHMENTS_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEXTDrawBuffersMAX_DRAW_BUFFERS_EXT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEBGL)

#endif