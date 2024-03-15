#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass210
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass21_0"));
	}

	template <typename R = Il2CppString*> R& innerName() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CreateSpawnCheatInfob__0() {
		return ((R (*)(cDisplayClass210*))(Il2CppBase() + 0x1138784))(this);
	}

};

