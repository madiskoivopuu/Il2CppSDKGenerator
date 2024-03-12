#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass220
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass22_0"));
	}

	template <typename T = uintptr_t> T& countField() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& innerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CreateQuestCheatInfob__0() {
		return ((T (*)(cDisplayClass220*))(Il2CppBase() + 0x11387E4))(this);
	}

};

}
