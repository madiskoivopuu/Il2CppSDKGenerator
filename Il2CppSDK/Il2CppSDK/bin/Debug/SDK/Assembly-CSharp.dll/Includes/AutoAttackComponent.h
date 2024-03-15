#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoAttackComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoAttackComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AutoAttackComponent*, Il2CppObject*))(Il2CppBase() + 0x1A62400))(this, targetObject);
	}

};

