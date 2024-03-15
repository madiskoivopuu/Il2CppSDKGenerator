#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CategoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CategoryComponent"));
	}

	template <typename R = Il2CppArray<Category*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CategoryComponent*, Il2CppObject*))(Il2CppBase() + 0x13E87E0))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CategoryComponent*, uintptr_t))(Il2CppBase() + 0x13E885C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CategoryComponent*, uintptr_t))(Il2CppBase() + 0x13E89B8))(this, writer);
	}

};

