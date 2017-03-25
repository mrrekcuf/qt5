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

#if ENABLE(VIDEO)

#include "JSHTMLAudioElement.h"

#include "ExceptionCode.h"
#include "HTMLAudioElement.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLAudioElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAudioElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLAudioElementTable = { 2, 1, JSHTMLAudioElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLAudioElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLAudioElementConstructorTable = { 1, 0, JSHTMLAudioElementConstructorTableValues, 0 };
const ClassInfo JSHTMLAudioElementConstructor::s_info = { "HTMLAudioElementConstructor", &Base::s_info, &JSHTMLAudioElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLAudioElementConstructor) };

JSHTMLAudioElementConstructor::JSHTMLAudioElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLAudioElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLAudioElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLAudioElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAudioElementConstructor, JSDOMWrapper>(exec, &JSHTMLAudioElementConstructorTable, jsCast<JSHTMLAudioElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLAudioElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLAudioElementConstructor, JSDOMWrapper>(exec, &JSHTMLAudioElementConstructorTable, jsCast<JSHTMLAudioElementConstructor*>(object), propertyName, descriptor);
}

EncodedJSValue JSC_HOST_CALL JSHTMLAudioElementNamedConstructor::constructJSHTMLAudioElement(ExecState* exec)
{
    JSHTMLAudioElementNamedConstructor* castedThis = jsCast<JSHTMLAudioElementNamedConstructor*>(exec->callee());
    const String& src(argumentOrNull(exec, 0).isEmpty() ? String() : argumentOrNull(exec, 0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<HTMLAudioElement> object = HTMLAudioElement::createForJSConstructor(castedThis->document(), src);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSHTMLAudioElementNamedConstructor::s_info = { "AudioConstructor", &Base::s_info, 0, 0, CREATE_METHOD_TABLE(JSHTMLAudioElementNamedConstructor) };

JSHTMLAudioElementNamedConstructor::JSHTMLAudioElementNamedConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorWithDocument(structure, globalObject)
{
}

void JSHTMLAudioElementNamedConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(globalObject);
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLAudioElementPrototype::self(exec, globalObject), None);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

ConstructType JSHTMLAudioElementNamedConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSHTMLAudioElement;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSHTMLAudioElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLAudioElementPrototypeTable = { 1, 0, JSHTMLAudioElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLAudioElementPrototype::s_info = { "HTMLAudioElementPrototype", &Base::s_info, &JSHTMLAudioElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLAudioElementPrototype) };

JSObject* JSHTMLAudioElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLAudioElement>(exec, globalObject);
}

const ClassInfo JSHTMLAudioElement::s_info = { "HTMLAudioElement", &Base::s_info, &JSHTMLAudioElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLAudioElement) };

JSHTMLAudioElement::JSHTMLAudioElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLAudioElement> impl)
    : JSHTMLMediaElement(structure, globalObject, impl)
{
}

void JSHTMLAudioElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLAudioElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLAudioElementPrototype::create(exec->vm(), globalObject, JSHTMLAudioElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLMediaElementPrototype::self(exec, globalObject)));
}

bool JSHTMLAudioElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLAudioElement* thisObject = jsCast<JSHTMLAudioElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLAudioElement, Base>(exec, &JSHTMLAudioElementTable, thisObject, propertyName, slot);
}

bool JSHTMLAudioElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLAudioElement* thisObject = jsCast<JSHTMLAudioElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLAudioElement, Base>(exec, &JSHTMLAudioElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLAudioElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAudioElement* domObject = jsCast<JSHTMLAudioElement*>(asObject(slotBase));
    return JSHTMLAudioElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSHTMLAudioElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLAudioElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSHTMLAudioElement::getNamedConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLAudioElementNamedConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSHTMLAudioElement* jsHTMLAudioElement)
{
    if (jsHTMLAudioElement->hasCustomProperties())
        return true;
    return false;
}

bool JSHTMLAudioElementOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSHTMLAudioElement* jsHTMLAudioElement = jsCast<JSHTMLAudioElement*>(handle.get().asCell());
    if (jsHTMLAudioElement->impl()->hasPendingActivity())
        return true;
    if (jsHTMLAudioElement->impl()->isFiringEventListeners())
        return true;
    if (JSNodeOwner::isReachableFromOpaqueRoots(handle, 0, visitor))
        return true;
    if (!isObservable(jsHTMLAudioElement))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSHTMLAudioElementOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSHTMLAudioElement* jsHTMLAudioElement = jsCast<JSHTMLAudioElement*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsHTMLAudioElement->impl(), jsHTMLAudioElement);
    jsHTMLAudioElement->releaseImpl();
}


}

#endif // ENABLE(VIDEO)