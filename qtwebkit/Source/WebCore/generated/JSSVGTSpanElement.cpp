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

#if ENABLE(SVG)

#include "JSSVGTSpanElement.h"

#include "SVGTSpanElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGTSpanElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTSpanElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGTSpanElementTable = { 2, 1, JSSVGTSpanElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGTSpanElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGTSpanElementConstructorTable = { 1, 0, JSSVGTSpanElementConstructorTableValues, 0 };
const ClassInfo JSSVGTSpanElementConstructor::s_info = { "SVGTSpanElementConstructor", &Base::s_info, &JSSVGTSpanElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGTSpanElementConstructor) };

JSSVGTSpanElementConstructor::JSSVGTSpanElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGTSpanElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGTSpanElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGTSpanElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTSpanElementConstructor, JSDOMWrapper>(exec, &JSSVGTSpanElementConstructorTable, jsCast<JSSVGTSpanElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGTSpanElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTSpanElementConstructor, JSDOMWrapper>(exec, &JSSVGTSpanElementConstructorTable, jsCast<JSSVGTSpanElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGTSpanElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGTSpanElementPrototypeTable = { 1, 0, JSSVGTSpanElementPrototypeTableValues, 0 };
const ClassInfo JSSVGTSpanElementPrototype::s_info = { "SVGTSpanElementPrototype", &Base::s_info, &JSSVGTSpanElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGTSpanElementPrototype) };

JSObject* JSSVGTSpanElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTSpanElement>(exec, globalObject);
}

const ClassInfo JSSVGTSpanElement::s_info = { "SVGTSpanElement", &Base::s_info, &JSSVGTSpanElementTable, 0 , CREATE_METHOD_TABLE(JSSVGTSpanElement) };

JSSVGTSpanElement::JSSVGTSpanElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTSpanElement> impl)
    : JSSVGTextPositioningElement(structure, globalObject, impl)
{
}

void JSSVGTSpanElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGTSpanElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGTSpanElementPrototype::create(exec->vm(), globalObject, JSSVGTSpanElementPrototype::createStructure(exec->vm(), globalObject, JSSVGTextPositioningElementPrototype::self(exec, globalObject)));
}

bool JSSVGTSpanElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGTSpanElement* thisObject = jsCast<JSSVGTSpanElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGTSpanElement, Base>(exec, &JSSVGTSpanElementTable, thisObject, propertyName, slot);
}

bool JSSVGTSpanElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGTSpanElement* thisObject = jsCast<JSSVGTSpanElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGTSpanElement, Base>(exec, &JSSVGTSpanElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGTSpanElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGTSpanElement* domObject = jsCast<JSSVGTSpanElement*>(asObject(slotBase));
    return JSSVGTSpanElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGTSpanElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTSpanElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)