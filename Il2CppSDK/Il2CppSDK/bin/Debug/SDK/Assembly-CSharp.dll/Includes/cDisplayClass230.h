#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass230
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_0"));
	}

	template <typename T = Il2CppString*> T& innerName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CreateMagicToggleCheatInfob__0() {
		return ((T (*)(cDisplayClass230*))(Il2CppBase() + 0x1138900))(this);
	}

};

