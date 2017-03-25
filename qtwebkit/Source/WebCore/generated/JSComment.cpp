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
#include "JSComment.h"

#include "Comment.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCommentTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCommentConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCommentTable = { 2, 1, JSCommentTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSCommentConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCommentConstructorTable = { 1, 0, JSCommentConstructorTableValues, 0 };
const ClassInfo JSCommentConstructor::s_info = { "CommentConstructor", &Base::s_info, &JSCommentConstructorTable, 0, CREATE_METHOD_TABLE(JSCommentConstructor) };

JSCommentConstructor::JSCommentConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCommentConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSCommentPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSCommentConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCommentConstructor, JSDOMWrapper>(exec, &JSCommentConstructorTable, jsCast<JSCommentConstructor*>(cell), propertyName, slot);
}

bool JSCommentConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCommentConstructor, JSDOMWrapper>(exec, &JSCommentConstructorTable, jsCast<JSCommentConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSCommentPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCommentPrototypeTable = { 1, 0, JSCommentPrototypeTableValues, 0 };
const ClassInfo JSCommentPrototype::s_info = { "CommentPrototype", &Base::s_info, &JSCommentPrototypeTable, 0, CREATE_METHOD_TABLE(JSCommentPrototype) };

JSObject* JSCommentPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSComment>(exec, globalObject);
}

const ClassInfo JSComment::s_info = { "Comment", &Base::s_info, &JSCommentTable, 0 , CREATE_METHOD_TABLE(JSComment) };

JSComment::JSComment(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Comment> impl)
    : JSCharacterData(structure, globalObject, impl)
{
}

void JSComment::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSComment::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSCommentPrototype::create(exec->vm(), globalObject, JSCommentPrototype::createStructure(exec->vm(), globalObject, JSCharacterDataPrototype::self(exec, globalObject)));
}

bool JSComment::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSComment* thisObject = jsCast<JSComment*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSComment, Base>(exec, &JSCommentTable, thisObject, propertyName, slot);
}

bool JSComment::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSComment* thisObject = jsCast<JSComment*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSComment, Base>(exec, &JSCommentTable, thisObject, propertyName, descriptor);
}

JSValue jsCommentConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSComment* domObject = jsCast<JSComment*>(asObject(slotBase));
    return JSComment::getConstructor(exec, domObject->globalObject());
}

JSValue JSComment::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCommentConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}