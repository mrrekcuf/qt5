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
#include "JSWebKitCSSMatrix.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSWebKitCSSMatrix.h"
#include "KURL.h"
#include "WebKitCSSMatrix.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebKitCSSMatrixTableValues[] =
{
    { "a", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixA), (intptr_t)setJSWebKitCSSMatrixA, NoIntrinsic },
    { "b", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixB), (intptr_t)setJSWebKitCSSMatrixB, NoIntrinsic },
    { "c", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixC), (intptr_t)setJSWebKitCSSMatrixC, NoIntrinsic },
    { "d", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixD), (intptr_t)setJSWebKitCSSMatrixD, NoIntrinsic },
    { "e", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixE), (intptr_t)setJSWebKitCSSMatrixE, NoIntrinsic },
    { "f", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixF), (intptr_t)setJSWebKitCSSMatrixF, NoIntrinsic },
    { "m11", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM11), (intptr_t)setJSWebKitCSSMatrixM11, NoIntrinsic },
    { "m12", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM12), (intptr_t)setJSWebKitCSSMatrixM12, NoIntrinsic },
    { "m13", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM13), (intptr_t)setJSWebKitCSSMatrixM13, NoIntrinsic },
    { "m14", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM14), (intptr_t)setJSWebKitCSSMatrixM14, NoIntrinsic },
    { "m21", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM21), (intptr_t)setJSWebKitCSSMatrixM21, NoIntrinsic },
    { "m22", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM22), (intptr_t)setJSWebKitCSSMatrixM22, NoIntrinsic },
    { "m23", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM23), (intptr_t)setJSWebKitCSSMatrixM23, NoIntrinsic },
    { "m24", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM24), (intptr_t)setJSWebKitCSSMatrixM24, NoIntrinsic },
    { "m31", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM31), (intptr_t)setJSWebKitCSSMatrixM31, NoIntrinsic },
    { "m32", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM32), (intptr_t)setJSWebKitCSSMatrixM32, NoIntrinsic },
    { "m33", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM33), (intptr_t)setJSWebKitCSSMatrixM33, NoIntrinsic },
    { "m34", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM34), (intptr_t)setJSWebKitCSSMatrixM34, NoIntrinsic },
    { "m41", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM41), (intptr_t)setJSWebKitCSSMatrixM41, NoIntrinsic },
    { "m42", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM42), (intptr_t)setJSWebKitCSSMatrixM42, NoIntrinsic },
    { "m43", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM43), (intptr_t)setJSWebKitCSSMatrixM43, NoIntrinsic },
    { "m44", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixM44), (intptr_t)setJSWebKitCSSMatrixM44, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSMatrixConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebKitCSSMatrixTable = { 66, 63, JSWebKitCSSMatrixTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebKitCSSMatrixConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebKitCSSMatrixConstructorTable = { 1, 0, JSWebKitCSSMatrixConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSWebKitCSSMatrixConstructor::constructJSWebKitCSSMatrix(ExecState* exec)
{
    JSWebKitCSSMatrixConstructor* castedThis = jsCast<JSWebKitCSSMatrixConstructor*>(exec->callee());
    ExceptionCode ec = 0;
    const String& cssValue(argumentOrNull(exec, 0).isEmpty() ? String() : argumentOrNull(exec, 0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<WebKitCSSMatrix> object = WebKitCSSMatrix::create(cssValue, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSWebKitCSSMatrixConstructor::s_info = { "WebKitCSSMatrixConstructor", &Base::s_info, &JSWebKitCSSMatrixConstructorTable, 0, CREATE_METHOD_TABLE(JSWebKitCSSMatrixConstructor) };

JSWebKitCSSMatrixConstructor::JSWebKitCSSMatrixConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitCSSMatrixConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSWebKitCSSMatrixPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWebKitCSSMatrixConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSMatrixConstructor, JSDOMWrapper>(exec, &JSWebKitCSSMatrixConstructorTable, jsCast<JSWebKitCSSMatrixConstructor*>(cell), propertyName, slot);
}

bool JSWebKitCSSMatrixConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebKitCSSMatrixConstructor, JSDOMWrapper>(exec, &JSWebKitCSSMatrixConstructorTable, jsCast<JSWebKitCSSMatrixConstructor*>(object), propertyName, descriptor);
}

ConstructType JSWebKitCSSMatrixConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSWebKitCSSMatrix;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSWebKitCSSMatrixPrototypeTableValues[] =
{
    { "setMatrixValue", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionSetMatrixValue), (intptr_t)0, NoIntrinsic },
    { "multiply", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionMultiply), (intptr_t)0, NoIntrinsic },
    { "inverse", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionInverse), (intptr_t)0, NoIntrinsic },
    { "translate", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionTranslate), (intptr_t)0, NoIntrinsic },
    { "scale", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionScale), (intptr_t)0, NoIntrinsic },
    { "rotate", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionRotate), (intptr_t)0, NoIntrinsic },
    { "rotateAxisAngle", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionRotateAxisAngle), (intptr_t)0, NoIntrinsic },
    { "skewX", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionSkewX), (intptr_t)0, NoIntrinsic },
    { "skewY", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionSkewY), (intptr_t)0, NoIntrinsic },
    { "toString", DontDelete | DontEnum | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebKitCSSMatrixPrototypeFunctionToString), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebKitCSSMatrixPrototypeTable = { 33, 31, JSWebKitCSSMatrixPrototypeTableValues, 0 };
const ClassInfo JSWebKitCSSMatrixPrototype::s_info = { "WebKitCSSMatrixPrototype", &Base::s_info, &JSWebKitCSSMatrixPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebKitCSSMatrixPrototype) };

JSObject* JSWebKitCSSMatrixPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitCSSMatrix>(exec, globalObject);
}

bool JSWebKitCSSMatrixPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitCSSMatrixPrototype* thisObject = jsCast<JSWebKitCSSMatrixPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSWebKitCSSMatrixPrototypeTable, thisObject, propertyName, slot);
}

bool JSWebKitCSSMatrixPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWebKitCSSMatrixPrototype* thisObject = jsCast<JSWebKitCSSMatrixPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSWebKitCSSMatrixPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSWebKitCSSMatrix::s_info = { "WebKitCSSMatrix", &Base::s_info, &JSWebKitCSSMatrixTable, 0 , CREATE_METHOD_TABLE(JSWebKitCSSMatrix) };

JSWebKitCSSMatrix::JSWebKitCSSMatrix(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitCSSMatrix> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebKitCSSMatrix::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebKitCSSMatrix::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebKitCSSMatrixPrototype::create(exec->vm(), globalObject, JSWebKitCSSMatrixPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSWebKitCSSMatrix::destroy(JSC::JSCell* cell)
{
    JSWebKitCSSMatrix* thisObject = static_cast<JSWebKitCSSMatrix*>(cell);
    thisObject->JSWebKitCSSMatrix::~JSWebKitCSSMatrix();
}

JSWebKitCSSMatrix::~JSWebKitCSSMatrix()
{
    releaseImplIfNotNull();
}

bool JSWebKitCSSMatrix::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitCSSMatrix* thisObject = jsCast<JSWebKitCSSMatrix*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSWebKitCSSMatrix, Base>(exec, &JSWebKitCSSMatrixTable, thisObject, propertyName, slot);
}

bool JSWebKitCSSMatrix::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWebKitCSSMatrix* thisObject = jsCast<JSWebKitCSSMatrix*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSWebKitCSSMatrix, Base>(exec, &JSWebKitCSSMatrixTable, thisObject, propertyName, descriptor);
}

JSValue jsWebKitCSSMatrixA(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->a());
    return result;
}


JSValue jsWebKitCSSMatrixB(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->b());
    return result;
}


JSValue jsWebKitCSSMatrixC(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->c());
    return result;
}


JSValue jsWebKitCSSMatrixD(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->d());
    return result;
}


JSValue jsWebKitCSSMatrixE(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->e());
    return result;
}


JSValue jsWebKitCSSMatrixF(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->f());
    return result;
}


JSValue jsWebKitCSSMatrixM11(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m11());
    return result;
}


JSValue jsWebKitCSSMatrixM12(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m12());
    return result;
}


JSValue jsWebKitCSSMatrixM13(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m13());
    return result;
}


JSValue jsWebKitCSSMatrixM14(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m14());
    return result;
}


JSValue jsWebKitCSSMatrixM21(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m21());
    return result;
}


JSValue jsWebKitCSSMatrixM22(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m22());
    return result;
}


JSValue jsWebKitCSSMatrixM23(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m23());
    return result;
}


JSValue jsWebKitCSSMatrixM24(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m24());
    return result;
}


JSValue jsWebKitCSSMatrixM31(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m31());
    return result;
}


JSValue jsWebKitCSSMatrixM32(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m32());
    return result;
}


JSValue jsWebKitCSSMatrixM33(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m33());
    return result;
}


JSValue jsWebKitCSSMatrixM34(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m34());
    return result;
}


JSValue jsWebKitCSSMatrixM41(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m41());
    return result;
}


JSValue jsWebKitCSSMatrixM42(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m42());
    return result;
}


JSValue jsWebKitCSSMatrixM43(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m43());
    return result;
}


JSValue jsWebKitCSSMatrixM44(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    JSValue result = jsNumber(impl->m44());
    return result;
}


JSValue jsWebKitCSSMatrixConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSMatrix* domObject = jsCast<JSWebKitCSSMatrix*>(asObject(slotBase));
    return JSWebKitCSSMatrix::getConstructor(exec, domObject->globalObject());
}

void JSWebKitCSSMatrix::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSWebKitCSSMatrix* thisObject = jsCast<JSWebKitCSSMatrix*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSWebKitCSSMatrix, Base>(exec, propertyName, value, &JSWebKitCSSMatrixTable, thisObject, slot);
}

void setJSWebKitCSSMatrixA(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setA(nativeValue);
}


void setJSWebKitCSSMatrixB(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setB(nativeValue);
}


void setJSWebKitCSSMatrixC(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setC(nativeValue);
}


void setJSWebKitCSSMatrixD(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setD(nativeValue);
}


void setJSWebKitCSSMatrixE(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setE(nativeValue);
}


void setJSWebKitCSSMatrixF(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setF(nativeValue);
}


void setJSWebKitCSSMatrixM11(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM11(nativeValue);
}


void setJSWebKitCSSMatrixM12(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM12(nativeValue);
}


void setJSWebKitCSSMatrixM13(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM13(nativeValue);
}


void setJSWebKitCSSMatrixM14(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM14(nativeValue);
}


void setJSWebKitCSSMatrixM21(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM21(nativeValue);
}


void setJSWebKitCSSMatrixM22(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM22(nativeValue);
}


void setJSWebKitCSSMatrixM23(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM23(nativeValue);
}


void setJSWebKitCSSMatrixM24(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM24(nativeValue);
}


void setJSWebKitCSSMatrixM31(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM31(nativeValue);
}


void setJSWebKitCSSMatrixM32(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM32(nativeValue);
}


void setJSWebKitCSSMatrixM33(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM33(nativeValue);
}


void setJSWebKitCSSMatrixM34(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM34(nativeValue);
}


void setJSWebKitCSSMatrixM41(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM41(nativeValue);
}


void setJSWebKitCSSMatrixM42(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM42(nativeValue);
}


void setJSWebKitCSSMatrixM43(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM43(nativeValue);
}


void setJSWebKitCSSMatrixM44(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(thisObject);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setM44(nativeValue);
}


JSValue JSWebKitCSSMatrix::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitCSSMatrixConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionSetMatrixValue(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& string(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->setMatrixValue(string, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionMultiply(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    WebKitCSSMatrix* secondMatrix(toWebKitCSSMatrix(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->multiply(secondMatrix)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionInverse(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    ExceptionCode ec = 0;

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->inverse(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionTranslate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double x(exec->argument(0).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double y(exec->argument(1).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double z(exec->argument(2).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->translate(x, y, z)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionScale(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double scaleX(exec->argument(0).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double scaleY(exec->argument(1).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double scaleZ(exec->argument(2).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->scale(scaleX, scaleY, scaleZ)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionRotate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double rotX(exec->argument(0).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double rotY(exec->argument(1).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double rotZ(exec->argument(2).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->rotate(rotX, rotY, rotZ)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionRotateAxisAngle(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double x(exec->argument(0).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double y(exec->argument(1).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double z(exec->argument(2).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double angle(exec->argument(3).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->rotateAxisAngle(x, y, z, angle)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionSkewX(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double angle(exec->argument(0).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->skewX(angle)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionSkewY(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());
    double angle(exec->argument(0).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->skewY(angle)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitCSSMatrixPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitCSSMatrix::s_info))
        return throwVMTypeError(exec);
    JSWebKitCSSMatrix* castedThis = jsCast<JSWebKitCSSMatrix*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebKitCSSMatrix::s_info);
    WebKitCSSMatrix* impl = static_cast<WebKitCSSMatrix*>(castedThis->impl());

    JSC::JSValue result = jsStringWithCache(exec, impl->toString());
    return JSValue::encode(result);
}

static inline bool isObservable(JSWebKitCSSMatrix* jsWebKitCSSMatrix)
{
    if (jsWebKitCSSMatrix->hasCustomProperties())
        return true;
    return false;
}

bool JSWebKitCSSMatrixOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebKitCSSMatrix* jsWebKitCSSMatrix = jsCast<JSWebKitCSSMatrix*>(handle.get().asCell());
    if (!isObservable(jsWebKitCSSMatrix))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebKitCSSMatrixOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebKitCSSMatrix* jsWebKitCSSMatrix = jsCast<JSWebKitCSSMatrix*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsWebKitCSSMatrix->impl(), jsWebKitCSSMatrix);
    jsWebKitCSSMatrix->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebKitCSSMatrix@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore15WebKitCSSMatrixE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebKitCSSMatrix* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebKitCSSMatrix>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebKitCSSMatrix@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore15WebKitCSSMatrixE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails WebKitCSSMatrix does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebKitCSSMatrix), WebKitCSSMatrix_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebKitCSSMatrix has subclasses. If WebKitCSSMatrix has subclasses that get passed
    // to toJS() we currently require WebKitCSSMatrix you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebKitCSSMatrix>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebKitCSSMatrix>(exec, globalObject, impl);
}

WebKitCSSMatrix* toWebKitCSSMatrix(JSC::JSValue value)
{
    return value.inherits(&JSWebKitCSSMatrix::s_info) ? jsCast<JSWebKitCSSMatrix*>(asObject(value))->impl() : 0;
}

}