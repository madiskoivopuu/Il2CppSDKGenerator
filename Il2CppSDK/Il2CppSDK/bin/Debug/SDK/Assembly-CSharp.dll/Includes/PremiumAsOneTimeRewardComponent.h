#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PremiumAsOneTimeRewardComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PremiumAsOneTimeRewardComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(PremiumAsOneTimeRewardComponent*, uintptr_t))(Il2CppBase() + 0x16DF918))(this, targetObject);
	}

};

}
