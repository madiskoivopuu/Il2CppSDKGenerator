#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NoAutoModeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoAutoModeComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(NoAutoModeComponent*, Il2CppObject*))(Il2CppBase() + 0x13B1DE4))(this, target);
	}

};

