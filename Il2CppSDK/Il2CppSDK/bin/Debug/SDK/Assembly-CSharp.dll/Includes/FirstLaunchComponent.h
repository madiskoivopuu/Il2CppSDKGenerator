#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FirstLaunchComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FirstLaunchComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(FirstLaunchComponent*, Il2CppObject*))(Il2CppBase() + 0x16995D0))(this, target);
	}

};

