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

#if ENABLE(PERFORMANCE_TIMELINE)

#include "JSPerformanceEntryList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSPerformanceEntry.h"
#include "PerformanceEntry.h"
#include "PerformanceEntryList.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSPerformanceEntryListTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPerformanceEntryListLength), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSPerformanceEntryListTable = { 2, 1, JSPerformanceEntryListTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSPerformanceEntryListPrototypeTableValues[] =
{
    { "item", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsPerformanceEntryListPrototypeFunctionItem), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSPerformanceEntryListPrototypeTable = { 2, 1, JSPerformanceEntryListPrototypeTableValues, 0 };
const ClassInfo JSPerformanceEntryListPrototype::s_info = { "PerformanceEntryListPrototype", &Base::s_info, &JSPerformanceEntryListPrototypeTable, 0, CREATE_METHOD_TABLE(JSPerformanceEntryListPrototype) };

JSObject* JSPerformanceEntryListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSPerformanceEntryList>(exec, globalObject);
}

bool JSPerformanceEntryListPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSPerformanceEntryListPrototype* thisObject = jsCast<JSPerformanceEntryListPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSPerformanceEntryListPrototypeTable, thisObject, propertyName, slot);
}

bool JSPerformanceEntryListPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSPerformanceEntryListPrototype* thisObject = jsCast<JSPerformanceEntryListPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSPerformanceEntryListPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSPerformanceEntryList::s_info = { "PerformanceEntryList", &Base::s_info, &JSPerformanceEntryListTable, 0 , CREATE_METHOD_TABLE(JSPerformanceEntryList) };

JSPerformanceEntryList::JSPerformanceEntryList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<PerformanceEntryList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSPerformanceEntryList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSPerformanceEntryList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSPerformanceEntryListPrototype::create(exec->vm(), globalObject, JSPerformanceEntryListPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSPerformanceEntryList::destroy(JSC::JSCell* cell)
{
    JSPerformanceEntryList* thisObject = static_cast<JSPerformanceEntryList*>(cell);
    thisObject->JSPerformanceEntryList::~JSPerformanceEntryList();
}

JSPerformanceEntryList::~JSPerformanceEntryList()
{
    releaseImplIfNotNull();
}

bool JSPerformanceEntryList::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSPerformanceEntryList* thisObject = jsCast<JSPerformanceEntryList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSPerformanceEntryList>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<PerformanceEntryList*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSPerformanceEntryList, Base>(exec, &JSPerformanceEntryListTable, thisObject, propertyName, slot);
}

bool JSPerformanceEntryList::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSPerformanceEntryList* thisObject = jsCast<JSPerformanceEntryList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = JSPerformanceEntryListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(thisObject, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<PerformanceEntryList*>(thisObject->impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(thisObject, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSPerformanceEntryList, Base>(exec, &JSPerformanceEntryListTable, thisObject, propertyName, descriptor);
}

bool JSPerformanceEntryList::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSPerformanceEntryList* thisObject = jsCast<JSPerformanceEntryList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index < static_cast<PerformanceEntryList*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, thisObject->indexGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsPerformanceEntryListLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPerformanceEntryList* castedThis = jsCast<JSPerformanceEntryList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PerformanceEntryList* impl = static_cast<PerformanceEntryList*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


void JSPerformanceEntryList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSPerformanceEntryList* thisObject = jsCast<JSPerformanceEntryList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<PerformanceEntryList*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

EncodedJSValue JSC_HOST_CALL jsPerformanceEntryListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSPerformanceEntryList::s_info))
        return throwVMTypeError(exec);
    JSPerformanceEntryList* castedThis = jsCast<JSPerformanceEntryList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSPerformanceEntryList::s_info);
    PerformanceEntryList* impl = static_cast<PerformanceEntryList*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->item(index)));
    return JSValue::encode(result);
}


JSValue JSPerformanceEntryList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSPerformanceEntryList* thisObj = jsCast<JSPerformanceEntryList*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<PerformanceEntryList*>(thisObj->impl())->item(index));
}

static inline bool isObservable(JSPerformanceEntryList* jsPerformanceEntryList)
{
    if (jsPerformanceEntryList->hasCustomProperties())
        return true;
    return false;
}

bool JSPerformanceEntryListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSPerformanceEntryList* jsPerformanceEntryList = jsCast<JSPerformanceEntryList*>(handle.get().asCell());
    if (!isObservable(jsPerformanceEntryList))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSPerformanceEntryListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSPerformanceEntryList* jsPerformanceEntryList = jsCast<JSPerformanceEntryList*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsPerformanceEntryList->impl(), jsPerformanceEntryList);
    jsPerformanceEntryList->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, PerformanceEntryList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSPerformanceEntryList>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to PerformanceEntryList.
    COMPILE_ASSERT(!__is_polymorphic(PerformanceEntryList), PerformanceEntryList_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<PerformanceEntryList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSPerformanceEntryList>(exec, globalObject, impl);
}

PerformanceEntryList* toPerformanceEntryList(JSC::JSValue value)
{
    return value.inherits(&JSPerformanceEntryList::s_info) ? jsCast<JSPerformanceEntryList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(PERFORMANCE_TIMELINE)