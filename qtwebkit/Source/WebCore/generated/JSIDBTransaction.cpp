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

#include "config.h"

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBTransaction.h"

#include "DOMError.h"
#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "IDBDatabase.h"
#include "IDBObjectStore.h"
#include "IDBTransaction.h"
#include "JSDOMBinding.h"
#include "JSDOMError.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSIDBDatabase.h"
#include "JSIDBObjectStore.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSIDBTransactionTableValues[] =
{
    { "mode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionMode), (intptr_t)0, NoIntrinsic },
    { "db", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionDb), (intptr_t)0, NoIntrinsic },
    { "error", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionError), (intptr_t)0, NoIntrinsic },
    { "webkitErrorMessage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionWebkitErrorMessage), (intptr_t)0, NoIntrinsic },
    { "onabort", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionOnabort), (intptr_t)setJSIDBTransactionOnabort, NoIntrinsic },
    { "oncomplete", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionOncomplete), (intptr_t)setJSIDBTransactionOncomplete, NoIntrinsic },
    { "onerror", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionOnerror), (intptr_t)setJSIDBTransactionOnerror, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSIDBTransactionTable = { 18, 15, JSIDBTransactionTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSIDBTransactionConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSIDBTransactionConstructorTable = { 1, 0, JSIDBTransactionConstructorTableValues, 0 };
static const HashTable* getJSIDBTransactionConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSIDBTransactionConstructorTable);
}

const ClassInfo JSIDBTransactionConstructor::s_info = { "IDBTransactionConstructor", &Base::s_info, 0, getJSIDBTransactionConstructorTable, CREATE_METHOD_TABLE(JSIDBTransactionConstructor) };

JSIDBTransactionConstructor::JSIDBTransactionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSIDBTransactionConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSIDBTransactionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSIDBTransactionConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBTransactionConstructor, JSDOMWrapper>(exec, getJSIDBTransactionConstructorTable(exec), jsCast<JSIDBTransactionConstructor*>(cell), propertyName, slot);
}

bool JSIDBTransactionConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBTransactionConstructor, JSDOMWrapper>(exec, getJSIDBTransactionConstructorTable(exec), jsCast<JSIDBTransactionConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSIDBTransactionPrototypeTableValues[] =
{
    { "objectStore", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsIDBTransactionPrototypeFunctionObjectStore), (intptr_t)1, NoIntrinsic },
    { "abort", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsIDBTransactionPrototypeFunctionAbort), (intptr_t)0, NoIntrinsic },
    { "addEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsIDBTransactionPrototypeFunctionAddEventListener), (intptr_t)2, NoIntrinsic },
    { "removeEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsIDBTransactionPrototypeFunctionRemoveEventListener), (intptr_t)2, NoIntrinsic },
    { "dispatchEvent", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsIDBTransactionPrototypeFunctionDispatchEvent), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSIDBTransactionPrototypeTable = { 16, 15, JSIDBTransactionPrototypeTableValues, 0 };
static const HashTable* getJSIDBTransactionPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSIDBTransactionPrototypeTable);
}

const ClassInfo JSIDBTransactionPrototype::s_info = { "IDBTransactionPrototype", &Base::s_info, 0, getJSIDBTransactionPrototypeTable, CREATE_METHOD_TABLE(JSIDBTransactionPrototype) };

JSObject* JSIDBTransactionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBTransaction>(exec, globalObject);
}

bool JSIDBTransactionPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSIDBTransactionPrototype* thisObject = jsCast<JSIDBTransactionPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSIDBTransactionPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSIDBTransactionPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSIDBTransactionPrototype* thisObject = jsCast<JSIDBTransactionPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSIDBTransactionPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSIDBTransactionTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSIDBTransactionTable);
}

const ClassInfo JSIDBTransaction::s_info = { "IDBTransaction", &Base::s_info, 0, getJSIDBTransactionTable , CREATE_METHOD_TABLE(JSIDBTransaction) };

JSIDBTransaction::JSIDBTransaction(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBTransaction> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSIDBTransaction::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSIDBTransaction::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSIDBTransactionPrototype::create(exec->vm(), globalObject, JSIDBTransactionPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSIDBTransaction::destroy(JSC::JSCell* cell)
{
    JSIDBTransaction* thisObject = static_cast<JSIDBTransaction*>(cell);
    thisObject->JSIDBTransaction::~JSIDBTransaction();
}

JSIDBTransaction::~JSIDBTransaction()
{
    releaseImplIfNotNull();
}

bool JSIDBTransaction::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSIDBTransaction* thisObject = jsCast<JSIDBTransaction*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSIDBTransaction, Base>(exec, getJSIDBTransactionTable(exec), thisObject, propertyName, slot);
}

bool JSIDBTransaction::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSIDBTransaction* thisObject = jsCast<JSIDBTransaction*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSIDBTransaction, Base>(exec, getJSIDBTransactionTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsIDBTransactionMode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->mode());
    return result;
}


JSValue jsIDBTransactionDb(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->db()));
    return result;
}


JSValue jsIDBTransactionError(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->error()));
    return result;
}


JSValue jsIDBTransactionWebkitErrorMessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    JSValue result = jsStringOrUndefined(exec, impl->webkitErrorMessage());
    return result;
}


JSValue jsIDBTransactionOnabort(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    if (EventListener* listener = impl->onabort()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsIDBTransactionOncomplete(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    if (EventListener* listener = impl->oncomplete()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsIDBTransactionOnerror(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    if (EventListener* listener = impl->onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsIDBTransactionConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBTransaction* domObject = jsCast<JSIDBTransaction*>(asObject(slotBase));
    return JSIDBTransaction::getConstructor(exec, domObject->globalObject());
}

void JSIDBTransaction::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSIDBTransaction* thisObject = jsCast<JSIDBTransaction*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSIDBTransaction, Base>(exec, propertyName, value, getJSIDBTransactionTable(exec), thisObject, slot);
}

void setJSIDBTransactionOnabort(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(thisObject);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    impl->setOnabort(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSIDBTransactionOncomplete(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(thisObject);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    impl->setOncomplete(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSIDBTransactionOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(thisObject);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    impl->setOnerror(createJSAttributeEventListener(exec, value, thisObject));
}


JSValue JSIDBTransaction::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBTransactionConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionObjectStore(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBTransaction::s_info))
        return throwVMTypeError(exec);
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBTransaction::s_info);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& name(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->objectStore(name, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionAbort(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBTransaction::s_info))
        return throwVMTypeError(exec);
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBTransaction::s_info);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    ExceptionCode ec = 0;
    impl->abort(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBTransaction::s_info))
        return throwVMTypeError(exec);
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBTransaction::s_info);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBTransaction::s_info))
        return throwVMTypeError(exec);
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBTransaction::s_info);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBTransaction::s_info))
        return throwVMTypeError(exec);
    JSIDBTransaction* castedThis = jsCast<JSIDBTransaction*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBTransaction::s_info);
    IDBTransaction* impl = static_cast<IDBTransaction*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* evt(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSIDBTransaction::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSIDBTransaction* thisObject = jsCast<JSIDBTransaction*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl()->visitJSEventListeners(visitor);
}

static inline bool isObservable(JSIDBTransaction* jsIDBTransaction)
{
    if (jsIDBTransaction->hasCustomProperties())
        return true;
    if (jsIDBTransaction->impl()->hasEventListeners())
        return true;
    return false;
}

bool JSIDBTransactionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSIDBTransaction* jsIDBTransaction = jsCast<JSIDBTransaction*>(handle.get().asCell());
    if (jsIDBTransaction->impl()->hasPendingActivity())
        return true;
    if (jsIDBTransaction->impl()->isFiringEventListeners())
        return true;
    if (!isObservable(jsIDBTransaction))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSIDBTransactionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSIDBTransaction* jsIDBTransaction = jsCast<JSIDBTransaction*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsIDBTransaction->impl(), jsIDBTransaction);
    jsIDBTransaction->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7IDBTransaction@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore14IDBTransactionE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBTransaction* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSIDBTransaction>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7IDBTransaction@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore14IDBTransactionE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails IDBTransaction does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(IDBTransaction), IDBTransaction_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // IDBTransaction has subclasses. If IDBTransaction has subclasses that get passed
    // to toJS() we currently require IDBTransaction you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<IDBTransaction>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSIDBTransaction>(exec, globalObject, impl);
}

IDBTransaction* toIDBTransaction(JSC::JSValue value)
{
    return value.inherits(&JSIDBTransaction::s_info) ? jsCast<JSIDBTransaction*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)