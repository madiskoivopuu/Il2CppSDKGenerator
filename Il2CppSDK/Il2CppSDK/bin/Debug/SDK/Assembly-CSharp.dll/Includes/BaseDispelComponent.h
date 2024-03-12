#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseDispelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseDispelComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AnyTags() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Buffs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& ByActor() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& Controls() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = int32_t> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SuccessEffect() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BaseDispelComponent*, uintptr_t))(Il2CppBase() + 0x166CDC8))(this, target);
	}

};

}
