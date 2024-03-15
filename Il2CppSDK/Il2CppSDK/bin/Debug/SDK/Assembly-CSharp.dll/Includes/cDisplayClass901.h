#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class cDisplayClass901
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass9_0`1"));
	}

	template <typename R = Il2CppObject*> R& locker() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Il2CppDictionary<Il2CppString*, EntityBlueprint*>*& blueprints() {
		return *(Il2CppDictionary<Il2CppString*, EntityBlueprint*>**)((uintptr_t)this + 0x0);
	}


};

