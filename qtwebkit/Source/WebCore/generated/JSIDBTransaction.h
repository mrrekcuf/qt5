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

#ifndef JSIDBTransaction_h
#define JSIDBTransaction_h

#if ENABLE(INDEXED_DATABASE)

#include "IDBTransaction.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSIDBTransaction : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSIDBTransaction* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBTransaction> impl)
    {
        JSIDBTransaction* ptr = new (NotNull, JSC::allocateCell<JSIDBTransaction>(globalObject->vm().heap)) JSIDBTransaction(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSIDBTransaction();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    IDBTransaction* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    IDBTransaction* m_impl;
protected:
    JSIDBTransaction(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<IDBTransaction>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesVisitChildren | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSIDBTransactionOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, IDBTransaction*)
{
    DEFINE_STATIC_LOCAL(JSIDBTransactionOwner, jsIDBTransactionOwner, ());
    return &jsIDBTransactionOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, IDBTransaction*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, IDBTransaction*);
IDBTransaction* toIDBTransaction(JSC::JSValue);

class JSIDBTransactionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSIDBTransactionPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSIDBTransactionPrototype* ptr = new (NotNull, JSC::allocateCell<JSIDBTransactionPrototype>(vm.heap)) JSIDBTransactionPrototype(vm, globalObject, structure);
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
    JSIDBTransactionPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesVisitChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSIDBTransactionConstructor : public DOMConstructorObject {
private:
    JSIDBTransactionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSIDBTransactionConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSIDBTransactionConstructor* ptr = new (NotNull, JSC::allocateCell<JSIDBTransactionConstructor>(*exec->heap())) JSIDBTransactionConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionObjectStore(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionAbort(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsIDBTransactionMode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBTransactionDb(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBTransactionError(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBTransactionWebkitErrorMessage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBTransactionOnabort(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSIDBTransactionOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsIDBTransactionOncomplete(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSIDBTransactionOncomplete(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsIDBTransactionOnerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSIDBTransactionOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsIDBTransactionConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)

#endif