#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UndeletableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UndeletableComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(UndeletableComponent*, Il2CppObject*))(Il2CppBase() + 0x1536C18))(this, target);
	}

};

