#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FirstLaunchComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FirstLaunchComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(FirstLaunchComponent*, Il2CppObject*))(Il2CppBase() + 0x16995D0))(this, target);
	}

};

