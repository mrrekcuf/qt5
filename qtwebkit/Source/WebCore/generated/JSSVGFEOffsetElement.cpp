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

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSSVGFEOffsetElement.h"

#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEOffsetElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEOffsetElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementIn1), (intptr_t)0, NoIntrinsic },
    { "dx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementDx), (intptr_t)0, NoIntrinsic },
    { "dy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementDy), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementX), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementY), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementWidth), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementHeight), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementResult), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEOffsetElementTable = { 34, 31, JSSVGFEOffsetElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEOffsetElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEOffsetElementConstructorTable = { 1, 0, JSSVGFEOffsetElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEOffsetElementConstructor::s_info = { "SVGFEOffsetElementConstructor", &Base::s_info, &JSSVGFEOffsetElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEOffsetElementConstructor) };

JSSVGFEOffsetElementConstructor::JSSVGFEOffsetElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEOffsetElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFEOffsetElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEOffsetElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEOffsetElementConstructor, JSDOMWrapper>(exec, &JSSVGFEOffsetElementConstructorTable, jsCast<JSSVGFEOffsetElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFEOffsetElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEOffsetElementConstructor, JSDOMWrapper>(exec, &JSSVGFEOffsetElementConstructorTable, jsCast<JSSVGFEOffsetElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEOffsetElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEOffsetElementPrototypeTable = { 1, 0, JSSVGFEOffsetElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEOffsetElementPrototype::s_info = { "SVGFEOffsetElementPrototype", &Base::s_info, &JSSVGFEOffsetElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEOffsetElementPrototype) };

JSObject* JSSVGFEOffsetElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEOffsetElement>(exec, globalObject);
}

const ClassInfo JSSVGFEOffsetElement::s_info = { "SVGFEOffsetElement", &Base::s_info, &JSSVGFEOffsetElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEOffsetElement) };

JSSVGFEOffsetElement::JSSVGFEOffsetElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEOffsetElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGFEOffsetElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEOffsetElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFEOffsetElementPrototype::create(exec->vm(), globalObject, JSSVGFEOffsetElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEOffsetElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEOffsetElement* thisObject = jsCast<JSSVGFEOffsetElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFEOffsetElement, Base>(exec, &JSSVGFEOffsetElementTable, thisObject, propertyName, slot);
}

bool JSSVGFEOffsetElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFEOffsetElement* thisObject = jsCast<JSSVGFEOffsetElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFEOffsetElement, Base>(exec, &JSSVGFEOffsetElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFEOffsetElementIn1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEOffsetElement* castedThis = jsCast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* impl = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEOffsetElementDx(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEOffsetElement* castedThis = jsCast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* impl = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->dxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEOffsetElementDy(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEOffsetElement* castedThis = jsCast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* impl = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->dyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFEOffsetElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEOffsetElement* castedThis = jsCast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* impl = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEOffsetElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEOffsetElement* castedThis = jsCast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* impl = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEOffsetElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEOffsetElement* castedThis = jsCast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* impl = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEOffsetElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEOffsetElement* castedThis = jsCast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* impl = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEOffsetElementResult(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEOffsetElement* castedThis = jsCast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* impl = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFEOffsetElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEOffsetElement* domObject = jsCast<JSSVGFEOffsetElement*>(asObject(slotBase));
    return JSSVGFEOffsetElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEOffsetElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEOffsetElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)