#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass890
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass89_0"));
	}

	template <typename T = DataBlueprints*> T& datablueprints() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T InitAsyncb__0() {
		return ((T (*)(cDisplayClass890*))(Il2CppBase() + 0xE949D4))(this);
	}
	template <typename T = Il2CppList<EntityBlueprint*>*> T InitAsyncb__1() {
		return ((T (*)(cDisplayClass890*))(Il2CppBase() + 0xE94B80))(this);
	}

};

