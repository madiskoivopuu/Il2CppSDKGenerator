#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadCartComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadCartComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LoadCartComponent*, Il2CppObject*))(Il2CppBase() + 0x1430F54))(this, target);
	}

};

