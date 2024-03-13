#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UndeletableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UndeletableComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(UndeletableComponent*, Il2CppObject*))(Il2CppBase() + 0x1536C18))(this, target);
	}

};

