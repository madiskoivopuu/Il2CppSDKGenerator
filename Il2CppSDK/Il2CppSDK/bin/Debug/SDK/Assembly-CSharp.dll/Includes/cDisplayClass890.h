#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass890
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass89_0"));
	}

	template <typename R = DataBlueprints*> R& datablueprints() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 Il2CppDictionary<Il2CppString*, int32_t>* InitAsyncb__0() {
		return ((Il2CppDictionary<Il2CppString*, int32_t>* (*)(cDisplayClass890*))(Il2CppBase() + 0xE949D4))(this);
	}
	 Il2CppList<EntityBlueprint*>* InitAsyncb__1() {
		return ((Il2CppList<EntityBlueprint*>* (*)(cDisplayClass890*))(Il2CppBase() + 0xE94B80))(this);
	}

};

