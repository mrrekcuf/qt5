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
#include "JSWebKitPoint.h"

#include "WebKitPoint.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebKitPointTableValues[] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitPointX), (intptr_t)setJSWebKitPointX, NoIntrinsic },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitPointY), (intptr_t)setJSWebKitPointY, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitPointConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebKitPointTable = { 9, 7, JSWebKitPointTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebKitPointConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebKitPointConstructorTable = { 1, 0, JSWebKitPointConstructorTableValues, 0 };
const ClassInfo JSWebKitPointConstructor::s_info = { "WebKitPointConstructor", &Base::s_info, &JSWebKitPointConstructorTable, 0, CREATE_METHOD_TABLE(JSWebKitPointConstructor) };

JSWebKitPointConstructor::JSWebKitPointConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitPointConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSWebKitPointPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWebKitPointConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitPointConstructor, JSDOMWrapper>(exec, &JSWebKitPointConstructorTable, jsCast<JSWebKitPointConstructor*>(cell), propertyName, slot);
}

bool JSWebKitPointConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebKitPointConstructor, JSDOMWrapper>(exec, &JSWebKitPointConstructorTable, jsCast<JSWebKitPointConstructor*>(object), propertyName, descriptor);
}

ConstructType JSWebKitPointConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSWebKitPoint;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSWebKitPointPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebKitPointPrototypeTable = { 1, 0, JSWebKitPointPrototypeTableValues, 0 };
const ClassInfo JSWebKitPointPrototype::s_info = { "WebKitPointPrototype", &Base::s_info, &JSWebKitPointPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebKitPointPrototype) };

JSObject* JSWebKitPointPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitPoint>(exec, globalObject);
}

const ClassInfo JSWebKitPoint::s_info = { "WebKitPoint", &Base::s_info, &JSWebKitPointTable, 0 , CREATE_METHOD_TABLE(JSWebKitPoint) };

JSWebKitPoint::JSWebKitPoint(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitPoint> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebKitPoint::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebKitPoint::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebKitPointPrototype::create(exec->vm(), globalObject, JSWebKitPointPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSWebKitPoint::destroy(JSC::JSCell* cell)
{
    JSWebKitPoint* thisObject = static_cast<JSWebKitPoint*>(cell);
    thisObject->JSWebKitPoint::~JSWebKitPoint();
}

JSWebKitPoint::~JSWebKitPoint()
{
    releaseImplIfNotNull();
}

bool JSWebKitPoint::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitPoint* thisObject = jsCast<JSWebKitPoint*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSWebKitPoint, Base>(exec, &JSWebKitPointTable, thisObject, propertyName, slot);
}

bool JSWebKitPoint::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWebKitPoint* thisObject = jsCast<JSWebKitPoint*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSWebKitPoint, Base>(exec, &JSWebKitPointTable, thisObject, propertyName, descriptor);
}

JSValue jsWebKitPointX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitPoint* castedThis = jsCast<JSWebKitPoint*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitPoint* impl = static_cast<WebKitPoint*>(castedThis->impl());
    JSValue result = jsNumber(impl->x());
    return result;
}


JSValue jsWebKitPointY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitPoint* castedThis = jsCast<JSWebKitPoint*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitPoint* impl = static_cast<WebKitPoint*>(castedThis->impl());
    JSValue result = jsNumber(impl->y());
    return result;
}


JSValue jsWebKitPointConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitPoint* domObject = jsCast<JSWebKitPoint*>(asObject(slotBase));
    return JSWebKitPoint::getConstructor(exec, domObject->globalObject());
}

void JSWebKitPoint::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSWebKitPoint* thisObject = jsCast<JSWebKitPoint*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSWebKitPoint, Base>(exec, propertyName, value, &JSWebKitPointTable, thisObject, slot);
}

void setJSWebKitPointX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitPoint* castedThis = jsCast<JSWebKitPoint*>(thisObject);
    WebKitPoint* impl = static_cast<WebKitPoint*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setX(nativeValue);
}


void setJSWebKitPointY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitPoint* castedThis = jsCast<JSWebKitPoint*>(thisObject);
    WebKitPoint* impl = static_cast<WebKitPoint*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY(nativeValue);
}


JSValue JSWebKitPoint::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitPointConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSWebKitPoint* jsWebKitPoint)
{
    if (jsWebKitPoint->hasCustomProperties())
        return true;
    return false;
}

bool JSWebKitPointOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebKitPoint* jsWebKitPoint = jsCast<JSWebKitPoint*>(handle.get().asCell());
    if (!isObservable(jsWebKitPoint))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebKitPointOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebKitPoint* jsWebKitPoint = jsCast<JSWebKitPoint*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsWebKitPoint->impl(), jsWebKitPoint);
    jsWebKitPoint->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebKitPoint* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebKitPoint>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to WebKitPoint.
    COMPILE_ASSERT(!__is_polymorphic(WebKitPoint), WebKitPoint_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<WebKitPoint>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebKitPoint>(exec, globalObject, impl);
}

WebKitPoint* toWebKitPoint(JSC::JSValue value)
{
    return value.inherits(&JSWebKitPoint::s_info) ? jsCast<JSWebKitPoint*>(asObject(value))->impl() : 0;
}

}