#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemovableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemovableComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(RemovableComponent*, Il2CppObject*))(Il2CppBase() + 0x13A0198))(this, target);
	}

};

