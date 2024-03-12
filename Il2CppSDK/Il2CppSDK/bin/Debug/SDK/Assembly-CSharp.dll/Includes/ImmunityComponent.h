#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImmunityComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImmunityComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Tags() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ImmunityComponent*, uintptr_t))(Il2CppBase() + 0x1E3DCD0))(this, target);
	}
	template <typename T = uintptr_t> T GetGroup() {
		return ((T (*)(ImmunityComponent*))(Il2CppBase() + 0x1E3DD78))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(ImmunityComponent*))(Il2CppBase() + 0x1E3DD80))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ImmunityComponent*, uintptr_t))(Il2CppBase() + 0x1E3DD88))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ImmunityComponent*, uintptr_t))(Il2CppBase() + 0x1E3DE2C))(this, writer);
	}

};

}
