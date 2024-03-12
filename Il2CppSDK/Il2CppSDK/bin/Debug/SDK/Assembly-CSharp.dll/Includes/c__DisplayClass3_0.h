#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass3_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& lostEndpointId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnEndpointLostb__0() {
		return ((T (*)(cDisplayClass30*))(Il2CppBase() + 0x22A874C))(this);
	}

};

}
