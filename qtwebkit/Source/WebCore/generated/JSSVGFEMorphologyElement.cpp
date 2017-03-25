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

#include "JSSVGFEMorphologyElement.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEMorphologyElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEMorphologyElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementIn1), (intptr_t)0, NoIntrinsic },
    { "operator", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementOperator), (intptr_t)0, NoIntrinsic },
    { "radiusX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementRadiusX), (intptr_t)0, NoIntrinsic },
    { "radiusY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementRadiusY), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementX), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementY), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementWidth), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementHeight), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementResult), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEMorphologyElementTable = { 33, 31, JSSVGFEMorphologyElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEMorphologyElementConstructorTableValues[] =
{
    { "SVG_MORPHOLOGY_OPERATOR_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_MORPHOLOGY_OPERATOR_ERODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_ERODE), (intptr_t)0, NoIntrinsic },
    { "SVG_MORPHOLOGY_OPERATOR_DILATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_DILATE), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEMorphologyElementConstructorTable = { 8, 7, JSSVGFEMorphologyElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEMorphologyElementConstructor::s_info = { "SVGFEMorphologyElementConstructor", &Base::s_info, &JSSVGFEMorphologyElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEMorphologyElementConstructor) };

JSSVGFEMorphologyElementConstructor::JSSVGFEMorphologyElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEMorphologyElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFEMorphologyElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEMorphologyElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEMorphologyElementConstructor, JSDOMWrapper>(exec, &JSSVGFEMorphologyElementConstructorTable, jsCast<JSSVGFEMorphologyElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFEMorphologyElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEMorphologyElementConstructor, JSDOMWrapper>(exec, &JSSVGFEMorphologyElementConstructorTable, jsCast<JSSVGFEMorphologyElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEMorphologyElementPrototypeTableValues[] =
{
    { "SVG_MORPHOLOGY_OPERATOR_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_MORPHOLOGY_OPERATOR_ERODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_ERODE), (intptr_t)0, NoIntrinsic },
    { "SVG_MORPHOLOGY_OPERATOR_DILATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_DILATE), (intptr_t)0, NoIntrinsic },
    { "setRadius", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEMorphologyElementPrototypeFunctionSetRadius), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEMorphologyElementPrototypeTable = { 9, 7, JSSVGFEMorphologyElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEMorphologyElementPrototype::s_info = { "SVGFEMorphologyElementPrototype", &Base::s_info, &JSSVGFEMorphologyElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEMorphologyElementPrototype) };

JSObject* JSSVGFEMorphologyElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEMorphologyElement>(exec, globalObject);
}

bool JSSVGFEMorphologyElementPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEMorphologyElementPrototype* thisObject = jsCast<JSSVGFEMorphologyElementPrototype*>(cell);
    return getStaticPropertySlot<JSSVGFEMorphologyElementPrototype, JSObject>(exec, &JSSVGFEMorphologyElementPrototypeTable, thisObject, propertyName, slot);
}

bool JSSVGFEMorphologyElementPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFEMorphologyElementPrototype* thisObject = jsCast<JSSVGFEMorphologyElementPrototype*>(object);
    return getStaticPropertyDescriptor<JSSVGFEMorphologyElementPrototype, JSObject>(exec, &JSSVGFEMorphologyElementPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSSVGFEMorphologyElement::s_info = { "SVGFEMorphologyElement", &Base::s_info, &JSSVGFEMorphologyElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEMorphologyElement) };

JSSVGFEMorphologyElement::JSSVGFEMorphologyElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEMorphologyElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGFEMorphologyElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEMorphologyElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFEMorphologyElementPrototype::create(exec->vm(), globalObject, JSSVGFEMorphologyElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEMorphologyElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEMorphologyElement* thisObject = jsCast<JSSVGFEMorphologyElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFEMorphologyElement, Base>(exec, &JSSVGFEMorphologyElementTable, thisObject, propertyName, slot);
}

bool JSSVGFEMorphologyElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFEMorphologyElement* thisObject = jsCast<JSSVGFEMorphologyElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFEMorphologyElement, Base>(exec, &JSSVGFEMorphologyElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFEMorphologyElementIn1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEMorphologyElementOperator(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = impl->svgOperatorAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEMorphologyElementRadiusX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->radiusXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEMorphologyElementRadiusY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->radiusYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFEMorphologyElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEMorphologyElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEMorphologyElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEMorphologyElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEMorphologyElementResult(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFEMorphologyElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEMorphologyElement* domObject = jsCast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    return JSSVGFEMorphologyElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEMorphologyElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEMorphologyElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEMorphologyElementPrototypeFunctionSetRadius(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEMorphologyElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEMorphologyElement* castedThis = jsCast<JSSVGFEMorphologyElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGFEMorphologyElement::s_info);
    SVGFEMorphologyElement* impl = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    float radiusX(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float radiusY(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->setRadius(radiusX, radiusY);
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_ERODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_DILATE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)