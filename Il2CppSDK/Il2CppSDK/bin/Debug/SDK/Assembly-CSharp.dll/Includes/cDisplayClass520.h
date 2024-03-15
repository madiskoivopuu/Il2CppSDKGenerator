#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass520
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass52_0"));
	}

	template <typename R = CharacterCreationWindow*> R& window() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = CharacterCreationWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R OnClassApplyb__0() {
		return ((R (*)(cDisplayClass520*))(Il2CppBase() + 0x1118614))(this);
	}

};

