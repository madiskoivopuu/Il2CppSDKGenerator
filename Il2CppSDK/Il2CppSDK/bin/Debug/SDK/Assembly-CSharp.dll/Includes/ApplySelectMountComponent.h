#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySelectMountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySelectMountComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplySelectMountComponent*, Il2CppObject*))(Il2CppBase() + 0x1895480))(this, target);
	}

};

