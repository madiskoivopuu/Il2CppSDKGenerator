#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDeathComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(OnDeathComponent*, Il2CppObject*))(Il2CppBase() + 0x11DC740))(this, targetObject);
	}

};

