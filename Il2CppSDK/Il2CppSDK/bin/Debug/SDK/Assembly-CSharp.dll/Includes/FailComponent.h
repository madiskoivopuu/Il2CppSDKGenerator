#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FailComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FailComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(FailComponent*, Il2CppObject*))(Il2CppBase() + 0x169254C))(this, target);
	}

};

