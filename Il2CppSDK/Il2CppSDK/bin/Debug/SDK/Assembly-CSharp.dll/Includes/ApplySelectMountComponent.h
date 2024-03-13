#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySelectMountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySelectMountComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplySelectMountComponent*, Il2CppObject*))(Il2CppBase() + 0x1895480))(this, target);
	}

};

