#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CategoryEventsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CategoryEventsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CategoryEventsComponent*, uintptr_t))(Il2CppBase() + 0x13E8DBC))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CategoryEventsComponent*, uintptr_t))(Il2CppBase() + 0x13E8E54))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CategoryEventsComponent*, uintptr_t))(Il2CppBase() + 0x13E8FAC))(this, writer);
	}

};

}
