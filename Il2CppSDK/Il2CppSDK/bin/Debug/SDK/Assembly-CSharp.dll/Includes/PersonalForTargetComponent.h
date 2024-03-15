#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalForTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalForTargetComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PersonalForTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x11EAEBC))(this, target);
	}

};

