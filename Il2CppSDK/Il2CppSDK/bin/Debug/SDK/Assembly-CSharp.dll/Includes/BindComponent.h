#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BindComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BindComponent"));
	}

	template <typename T = EntityId*> T& Target() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(BindComponent*, Il2CppObject*))(Il2CppBase() + 0x16BB3F8))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BindComponent*, uintptr_t))(Il2CppBase() + 0x16BB48C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BindComponent*, uintptr_t))(Il2CppBase() + 0x16BB50C))(this, writer);
	}

};

