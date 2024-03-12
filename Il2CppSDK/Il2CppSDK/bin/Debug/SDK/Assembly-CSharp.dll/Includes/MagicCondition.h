#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicCondition"));
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
	template <typename T = bool> T& SourceOwns() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T Check(uintptr_t magicData) {
		return ((T (*)(MagicCondition*, uintptr_t))(Il2CppBase() + 0x11F52E4))(this, magicData);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MagicCondition*, uintptr_t))(Il2CppBase() + 0x11F5424))(this, target);
	}

};

}
