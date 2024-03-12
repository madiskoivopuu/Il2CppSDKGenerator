#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass860
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass86_0"));
	}

	template <typename T = uintptr_t> T& resource() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T ShowRequirementsb__0(uintptr_t r) {
		return ((T (*)(cDisplayClass860*, uintptr_t))(Il2CppBase() + 0x1135CC8))(this, r);
	}

};

}
