#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerBuildOwnComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerBuildOwnComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerBuildOwnComponent*, Il2CppObject*))(Il2CppBase() + 0x1525598))(this, target);
	}

};

