#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerBuildOwnComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerBuildOwnComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerBuildOwnComponent*, Il2CppObject*))(Il2CppBase() + 0x1525598))(this, target);
	}

};

