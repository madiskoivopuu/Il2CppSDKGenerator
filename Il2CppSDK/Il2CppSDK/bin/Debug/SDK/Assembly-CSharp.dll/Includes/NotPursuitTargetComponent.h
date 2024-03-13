#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotPursuitTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotPursuitTargetComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(NotPursuitTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x13B6648))(this, targetObject);
	}

};

