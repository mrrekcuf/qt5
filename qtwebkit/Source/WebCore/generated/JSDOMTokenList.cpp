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
#include "JSDOMTokenList.h"

#include "DOMTokenList.h"
#include "Element.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNodeCustom.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDOMTokenListTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMTokenListLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMTokenListConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMTokenListTable = { 5, 3, JSDOMTokenListTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDOMTokenListConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMTokenListConstructorTable = { 1, 0, JSDOMTokenListConstructorTableValues, 0 };
const ClassInfo JSDOMTokenListConstructor::s_info = { "DOMTokenListConstructor", &Base::s_info, &JSDOMTokenListConstructorTable, 0, CREATE_METHOD_TABLE(JSDOMTokenListConstructor) };

JSDOMTokenListConstructor::JSDOMTokenListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDOMTokenListConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSDOMTokenListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDOMTokenListConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMTokenListConstructor, JSDOMWrapper>(exec, &JSDOMTokenListConstructorTable, jsCast<JSDOMTokenListConstructor*>(cell), propertyName, slot);
}

bool JSDOMTokenListConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMTokenListConstructor, JSDOMWrapper>(exec, &JSDOMTokenListConstructorTable, jsCast<JSDOMTokenListConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSDOMTokenListPrototypeTableValues[] =
{
    { "item", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMTokenListPrototypeFunctionItem), (intptr_t)1, NoIntrinsic },
    { "contains", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMTokenListPrototypeFunctionContains), (intptr_t)1, NoIntrinsic },
    { "add", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMTokenListPrototypeFunctionAdd), (intptr_t)1, NoIntrinsic },
    { "remove", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMTokenListPrototypeFunctionRemove), (intptr_t)1, NoIntrinsic },
    { "toggle", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMTokenListPrototypeFunctionToggle), (intptr_t)1, NoIntrinsic },
    { "toString", DontDelete | DontEnum | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMTokenListPrototypeFunctionToString), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMTokenListPrototypeTable = { 16, 15, JSDOMTokenListPrototypeTableValues, 0 };
const ClassInfo JSDOMTokenListPrototype::s_info = { "DOMTokenListPrototype", &Base::s_info, &JSDOMTokenListPrototypeTable, 0, CREATE_METHOD_TABLE(JSDOMTokenListPrototype) };

JSObject* JSDOMTokenListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMTokenList>(exec, globalObject);
}

bool JSDOMTokenListPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMTokenListPrototype* thisObject = jsCast<JSDOMTokenListPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMTokenListPrototypeTable, thisObject, propertyName, slot);
}

bool JSDOMTokenListPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMTokenListPrototype* thisObject = jsCast<JSDOMTokenListPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDOMTokenListPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSDOMTokenList::s_info = { "DOMTokenList", &Base::s_info, &JSDOMTokenListTable, 0 , CREATE_METHOD_TABLE(JSDOMTokenList) };

JSDOMTokenList::JSDOMTokenList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMTokenList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDOMTokenList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMTokenList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDOMTokenListPrototype::create(exec->vm(), globalObject, JSDOMTokenListPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSDOMTokenList::destroy(JSC::JSCell* cell)
{
    JSDOMTokenList* thisObject = static_cast<JSDOMTokenList*>(cell);
    thisObject->JSDOMTokenList::~JSDOMTokenList();
}

JSDOMTokenList::~JSDOMTokenList()
{
    releaseImplIfNotNull();
}

bool JSDOMTokenList::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMTokenList* thisObject = jsCast<JSDOMTokenList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSDOMTokenList>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex) {
        slot.setCustomIndex(thisObject, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSDOMTokenList, Base>(exec, &JSDOMTokenListTable, thisObject, propertyName, slot);
}

bool JSDOMTokenList::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMTokenList* thisObject = jsCast<JSDOMTokenList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = JSDOMTokenListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(thisObject, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<DOMTokenList*>(thisObject->impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(thisObject, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSDOMTokenList, Base>(exec, &JSDOMTokenListTable, thisObject, propertyName, descriptor);
}

bool JSDOMTokenList::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSDOMTokenList* thisObject = jsCast<JSDOMTokenList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index <= MAX_ARRAY_INDEX) {
        slot.setCustomIndex(thisObject, index, thisObject->indexGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsDOMTokenListLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMTokenList* castedThis = jsCast<JSDOMTokenList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMTokenList* impl = static_cast<DOMTokenList*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


JSValue jsDOMTokenListConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMTokenList* domObject = jsCast<JSDOMTokenList*>(asObject(slotBase));
    return JSDOMTokenList::getConstructor(exec, domObject->globalObject());
}

void JSDOMTokenList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSDOMTokenList* thisObject = jsCast<JSDOMTokenList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<DOMTokenList*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSDOMTokenList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMTokenListConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMTokenListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMTokenList::s_info))
        return throwVMTypeError(exec);
    JSDOMTokenList* castedThis = jsCast<JSDOMTokenList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMTokenList::s_info);
    DOMTokenList* impl = static_cast<DOMTokenList*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringOrNull(exec, impl->item(index));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMTokenListPrototypeFunctionContains(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMTokenList::s_info))
        return throwVMTypeError(exec);
    JSDOMTokenList* castedThis = jsCast<JSDOMTokenList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMTokenList::s_info);
    DOMTokenList* impl = static_cast<DOMTokenList*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& token(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->contains(token, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMTokenListPrototypeFunctionAdd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMTokenList::s_info))
        return throwVMTypeError(exec);
    JSDOMTokenList* castedThis = jsCast<JSDOMTokenList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMTokenList::s_info);
    DOMTokenList* impl = static_cast<DOMTokenList*>(castedThis->impl());
    ExceptionCode ec = 0;
    Vector<String> tokens = toNativeArguments<String>(exec, 0);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->add(tokens, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMTokenListPrototypeFunctionRemove(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMTokenList::s_info))
        return throwVMTypeError(exec);
    JSDOMTokenList* castedThis = jsCast<JSDOMTokenList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMTokenList::s_info);
    DOMTokenList* impl = static_cast<DOMTokenList*>(castedThis->impl());
    ExceptionCode ec = 0;
    Vector<String> tokens = toNativeArguments<String>(exec, 0);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->remove(tokens, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMTokenListPrototypeFunctionToggle(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMTokenList::s_info))
        return throwVMTypeError(exec);
    JSDOMTokenList* castedThis = jsCast<JSDOMTokenList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMTokenList::s_info);
    DOMTokenList* impl = static_cast<DOMTokenList*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& token(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = jsBoolean(impl->toggle(token, ec));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    bool force(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->toggle(token, force, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMTokenListPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMTokenList::s_info))
        return throwVMTypeError(exec);
    JSDOMTokenList* castedThis = jsCast<JSDOMTokenList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMTokenList::s_info);
    DOMTokenList* impl = static_cast<DOMTokenList*>(castedThis->impl());

    JSC::JSValue result = jsStringWithCache(exec, impl->toString());
    return JSValue::encode(result);
}


JSValue JSDOMTokenList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSDOMTokenList* thisObj = jsCast<JSDOMTokenList*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return jsStringOrUndefined(exec, thisObj->impl()->item(index));
}

static inline bool isObservable(JSDOMTokenList* jsDOMTokenList)
{
    if (jsDOMTokenList->hasCustomProperties())
        return true;
    return false;
}

bool JSDOMTokenListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDOMTokenList* jsDOMTokenList = jsCast<JSDOMTokenList*>(handle.get().asCell());
    if (!isObservable(jsDOMTokenList))
        return false;
    Element* element = jsDOMTokenList->impl()->element();
    if (!element)
        return false;
    void* root = WebCore::root(element);
    return visitor.containsOpaqueRoot(root);
}

void JSDOMTokenListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMTokenList* jsDOMTokenList = jsCast<JSDOMTokenList*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDOMTokenList->impl(), jsDOMTokenList);
    jsDOMTokenList->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMTokenList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMTokenList>(exec, impl))
        return result;
    ReportMemoryCost<DOMTokenList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDOMTokenList>(exec, globalObject, impl);
}

DOMTokenList* toDOMTokenList(JSC::JSValue value)
{
    return value.inherits(&JSDOMTokenList::s_info) ? jsCast<JSDOMTokenList*>(asObject(value))->impl() : 0;
}

}