#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseActionCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseActionCondition"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& NoTag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NoType() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = void*> T& Instant() {
		return *(T*)((uintptr_t)this + 0x2A);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BaseActionCondition*, uintptr_t))(Il2CppBase() + 0xFBBA14))(this, target);
	}
	template <typename T = bool> T Check(uintptr_t actionEntity) {
		return ((T (*)(BaseActionCondition*, uintptr_t))(Il2CppBase() + 0xFBBAE8))(this, actionEntity);
	}
	template <typename T = bool> T CheckWithNull(uintptr_t actionEntity) {
		return ((T (*)(BaseActionCondition*, uintptr_t))(Il2CppBase() + 0xFBBCBC))(this, actionEntity);
	}

};

}
