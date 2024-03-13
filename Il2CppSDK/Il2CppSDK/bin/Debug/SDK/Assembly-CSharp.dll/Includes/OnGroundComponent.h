#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnGroundComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGroundComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(OnGroundComponent*, Il2CppObject*))(Il2CppBase() + 0x11DC8C4))(this, target);
	}

};

