#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicParams"));
	}

	template <typename T = Il2CppString*> T& BaseMagicName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& ParamsDescription() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& RuneType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Chance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MainValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& SecondaryValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Il2CppString*> T GetResultMagicName() {
		return ((T (*)(MagicParams*))(Il2CppBase() + 0x10C794C))(this);
	}

};

}
