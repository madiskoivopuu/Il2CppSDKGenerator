#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNamesComponent" 

class QuestsComponent: StringNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsComponent"));
	}

	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(QuestsComponent*, uintptr_t))(Il2CppBase() + 0x1707228))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(QuestsComponent*, uintptr_t))(Il2CppBase() + 0x17072CC))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(QuestsComponent*, uintptr_t))(Il2CppBase() + 0x1707384))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(QuestsComponent*, uintptr_t))(Il2CppBase() + 0x1707404))(this, writer);
	}

};

}
