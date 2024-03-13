#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PlayerComponent*, Il2CppObject*))(Il2CppBase() + 0x15604D4))(this, target);
	}

};

