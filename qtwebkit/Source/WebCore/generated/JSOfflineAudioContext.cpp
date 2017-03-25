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

#if ENABLE(WEB_AUDIO)

#include "JSOfflineAudioContext.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "OfflineAudioContext.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSOfflineAudioContextTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsOfflineAudioContextConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSOfflineAudioContextTable = { 2, 1, JSOfflineAudioContextTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSOfflineAudioContextConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSOfflineAudioContextConstructorTable = { 1, 0, JSOfflineAudioContextConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSOfflineAudioContextConstructor::constructJSOfflineAudioContext(ExecState* exec)
{
    JSOfflineAudioContextConstructor* castedThis = jsCast<JSOfflineAudioContextConstructor*>(exec->callee());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    unsigned numberOfChannels(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    unsigned numberOfFrames(toUInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float sampleRate(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "OfflineAudioContext constructor associated document is unavailable"));
    RefPtr<OfflineAudioContext> object = OfflineAudioContext::create(context, numberOfChannels, numberOfFrames, sampleRate, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSOfflineAudioContextConstructor::s_info = { "webkitOfflineAudioContextConstructor", &Base::s_info, &JSOfflineAudioContextConstructorTable, 0, CREATE_METHOD_TABLE(JSOfflineAudioContextConstructor) };

JSOfflineAudioContextConstructor::JSOfflineAudioContextConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSOfflineAudioContextConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSOfflineAudioContextPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(3), ReadOnly | DontDelete | DontEnum);
}

bool JSOfflineAudioContextConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSOfflineAudioContextConstructor, JSDOMWrapper>(exec, &JSOfflineAudioContextConstructorTable, jsCast<JSOfflineAudioContextConstructor*>(cell), propertyName, slot);
}

bool JSOfflineAudioContextConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSOfflineAudioContextConstructor, JSDOMWrapper>(exec, &JSOfflineAudioContextConstructorTable, jsCast<JSOfflineAudioContextConstructor*>(object), propertyName, descriptor);
}

ConstructType JSOfflineAudioContextConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSOfflineAudioContext;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSOfflineAudioContextPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSOfflineAudioContextPrototypeTable = { 1, 0, JSOfflineAudioContextPrototypeTableValues, 0 };
const ClassInfo JSOfflineAudioContextPrototype::s_info = { "webkitOfflineAudioContextPrototype", &Base::s_info, &JSOfflineAudioContextPrototypeTable, 0, CREATE_METHOD_TABLE(JSOfflineAudioContextPrototype) };

JSObject* JSOfflineAudioContextPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSOfflineAudioContext>(exec, globalObject);
}

const ClassInfo JSOfflineAudioContext::s_info = { "webkitOfflineAudioContext", &Base::s_info, &JSOfflineAudioContextTable, 0 , CREATE_METHOD_TABLE(JSOfflineAudioContext) };

JSOfflineAudioContext::JSOfflineAudioContext(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<OfflineAudioContext> impl)
    : JSAudioContext(structure, globalObject, impl)
{
}

void JSOfflineAudioContext::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSOfflineAudioContext::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSOfflineAudioContextPrototype::create(exec->vm(), globalObject, JSOfflineAudioContextPrototype::createStructure(exec->vm(), globalObject, JSAudioContextPrototype::self(exec, globalObject)));
}

bool JSOfflineAudioContext::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSOfflineAudioContext* thisObject = jsCast<JSOfflineAudioContext*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSOfflineAudioContext, Base>(exec, &JSOfflineAudioContextTable, thisObject, propertyName, slot);
}

bool JSOfflineAudioContext::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSOfflineAudioContext* thisObject = jsCast<JSOfflineAudioContext*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSOfflineAudioContext, Base>(exec, &JSOfflineAudioContextTable, thisObject, propertyName, descriptor);
}

JSValue jsOfflineAudioContextConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSOfflineAudioContext* domObject = jsCast<JSOfflineAudioContext*>(asObject(slotBase));
    return JSOfflineAudioContext::getConstructor(exec, domObject->globalObject());
}

JSValue JSOfflineAudioContext::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSOfflineAudioContextConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

void JSOfflineAudioContext::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSOfflineAudioContext* thisObject = jsCast<JSOfflineAudioContext*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl()->visitJSEventListeners(visitor);
}

static inline bool isObservable(JSOfflineAudioContext* jsOfflineAudioContext)
{
    if (jsOfflineAudioContext->hasCustomProperties())
        return true;
    if (jsOfflineAudioContext->impl()->hasEventListeners())
        return true;
    return false;
}

bool JSOfflineAudioContextOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSOfflineAudioContext* jsOfflineAudioContext = jsCast<JSOfflineAudioContext*>(handle.get().asCell());
    if (jsOfflineAudioContext->impl()->hasPendingActivity())
        return true;
    if (jsOfflineAudioContext->impl()->isFiringEventListeners())
        return true;
    if (!isObservable(jsOfflineAudioContext))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSOfflineAudioContextOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSOfflineAudioContext* jsOfflineAudioContext = jsCast<JSOfflineAudioContext*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsOfflineAudioContext->impl(), jsOfflineAudioContext);
    jsOfflineAudioContext->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7OfflineAudioContext@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore19OfflineAudioContextE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, OfflineAudioContext* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSOfflineAudioContext>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7OfflineAudioContext@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore19OfflineAudioContextE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails OfflineAudioContext does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(OfflineAudioContext), OfflineAudioContext_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // OfflineAudioContext has subclasses. If OfflineAudioContext has subclasses that get passed
    // to toJS() we currently require OfflineAudioContext you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<OfflineAudioContext>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSOfflineAudioContext>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)