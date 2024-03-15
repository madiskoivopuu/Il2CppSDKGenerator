#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LimitCachedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LimitCachedComponent"));
	}

	 Il2CppDictionary<Il2CppString*, int32_t>*& List() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0x10);
	}


};

