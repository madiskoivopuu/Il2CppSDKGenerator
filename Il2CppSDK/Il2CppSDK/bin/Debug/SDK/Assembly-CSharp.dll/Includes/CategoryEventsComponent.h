#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CategoryEventsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CategoryEventsComponent"));
	}

	template <typename R = Il2CppArray<CategoryEvent*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CategoryEventsComponent*, Il2CppObject*))(Il2CppBase() + 0x13E8DBC))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CategoryEventsComponent*, uintptr_t))(Il2CppBase() + 0x13E8E54))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CategoryEventsComponent*, uintptr_t))(Il2CppBase() + 0x13E8FAC))(this, writer);
	}

};

