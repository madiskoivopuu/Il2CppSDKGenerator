#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass91
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass9_1"));
	}

	template <typename T = bool> T& needChange() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

