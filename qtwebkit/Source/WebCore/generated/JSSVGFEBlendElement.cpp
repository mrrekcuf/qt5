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

#include "JSSVGFEBlendElement.h"

#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEBlendElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEBlendElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementIn1), (intptr_t)0, NoIntrinsic },
    { "in2", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementIn2), (intptr_t)0, NoIntrinsic },
    { "mode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementMode), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementX), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementY), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementWidth), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementHeight), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementResult), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEBlendElementTable = { 34, 31, JSSVGFEBlendElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEBlendElementConstructorTableValues[] =
{
    { "SVG_FEBLEND_MODE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_NORMAL", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_NORMAL), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_MULTIPLY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_MULTIPLY), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_SCREEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_SCREEN), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_DARKEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_DARKEN), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_LIGHTEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_LIGHTEN), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEBlendElementConstructorTable = { 16, 15, JSSVGFEBlendElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEBlendElementConstructor::s_info = { "SVGFEBlendElementConstructor", &Base::s_info, &JSSVGFEBlendElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEBlendElementConstructor) };

JSSVGFEBlendElementConstructor::JSSVGFEBlendElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEBlendElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFEBlendElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEBlendElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEBlendElementConstructor, JSDOMWrapper>(exec, &JSSVGFEBlendElementConstructorTable, jsCast<JSSVGFEBlendElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFEBlendElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEBlendElementConstructor, JSDOMWrapper>(exec, &JSSVGFEBlendElementConstructorTable, jsCast<JSSVGFEBlendElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEBlendElementPrototypeTableValues[] =
{
    { "SVG_FEBLEND_MODE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_NORMAL", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_NORMAL), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_MULTIPLY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_MULTIPLY), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_SCREEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_SCREEN), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_DARKEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_DARKEN), (intptr_t)0, NoIntrinsic },
    { "SVG_FEBLEND_MODE_LIGHTEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_LIGHTEN), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEBlendElementPrototypeTable = { 16, 15, JSSVGFEBlendElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEBlendElementPrototype::s_info = { "SVGFEBlendElementPrototype", &Base::s_info, &JSSVGFEBlendElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEBlendElementPrototype) };

JSObject* JSSVGFEBlendElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEBlendElement>(exec, globalObject);
}

bool JSSVGFEBlendElementPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEBlendElementPrototype* thisObject = jsCast<JSSVGFEBlendElementPrototype*>(cell);
    return getStaticValueSlot<JSSVGFEBlendElementPrototype, JSObject>(exec, &JSSVGFEBlendElementPrototypeTable, thisObject, propertyName, slot);
}

bool JSSVGFEBlendElementPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFEBlendElementPrototype* thisObject = jsCast<JSSVGFEBlendElementPrototype*>(object);
    return getStaticValueDescriptor<JSSVGFEBlendElementPrototype, JSObject>(exec, &JSSVGFEBlendElementPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSSVGFEBlendElement::s_info = { "SVGFEBlendElement", &Base::s_info, &JSSVGFEBlendElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEBlendElement) };

JSSVGFEBlendElement::JSSVGFEBlendElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEBlendElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGFEBlendElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEBlendElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFEBlendElementPrototype::create(exec->vm(), globalObject, JSSVGFEBlendElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEBlendElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEBlendElement* thisObject = jsCast<JSSVGFEBlendElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFEBlendElement, Base>(exec, &JSSVGFEBlendElementTable, thisObject, propertyName, slot);
}

bool JSSVGFEBlendElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFEBlendElement* thisObject = jsCast<JSSVGFEBlendElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFEBlendElement, Base>(exec, &JSSVGFEBlendElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFEBlendElementIn1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* impl = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEBlendElementIn2(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* impl = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->in2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEBlendElementMode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* impl = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = impl->modeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFEBlendElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* impl = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEBlendElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* impl = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEBlendElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* impl = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEBlendElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* impl = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEBlendElementResult(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* impl = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFEBlendElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* domObject = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    return JSSVGFEBlendElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEBlendElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEBlendElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_NORMAL(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_MULTIPLY(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_SCREEN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_DARKEN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_LIGHTEN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)