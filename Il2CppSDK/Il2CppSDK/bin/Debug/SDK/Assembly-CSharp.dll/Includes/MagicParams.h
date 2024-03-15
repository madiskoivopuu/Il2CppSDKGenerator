#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicParams"));
	}

	template <typename R = Il2CppString*> R& BaseMagicName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& ParamsDescription() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = RuneType*> R& RuneType() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Chance() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& MainValue() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& SecondaryValue() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = Il2CppString*> R GetResultMagicName() {
		return ((R (*)(MagicParams*))(Il2CppBase() + 0x10C794C))(this);
	}

};

