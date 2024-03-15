#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass220
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass22_0"));
	}

	template <typename R = uintptr_t> R& countField() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& innerName() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CreateQuestCheatInfob__0() {
		return ((R (*)(cDisplayClass220*))(Il2CppBase() + 0x11387E4))(this);
	}

};

