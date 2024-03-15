#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PremiumAsOneTimeRewardComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PremiumAsOneTimeRewardComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PremiumAsOneTimeRewardComponent*, Il2CppObject*))(Il2CppBase() + 0x16DF918))(this, targetObject);
	}

};

