#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass520
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass52_0"));
	}

	template <typename T = CharacterCreationWindow*> T& window() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = CharacterCreationWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnClassApplyb__0() {
		return ((T (*)(cDisplayClass520*))(Il2CppBase() + 0x1118614))(this);
	}

};

