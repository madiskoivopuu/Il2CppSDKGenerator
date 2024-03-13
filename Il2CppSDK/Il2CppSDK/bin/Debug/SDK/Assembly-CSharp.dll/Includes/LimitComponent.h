#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "LimitCachedComponent.h" 

class LimitComponent : public LimitCachedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LimitComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(LimitComponent*, Il2CppObject*))(Il2CppBase() + 0x142C9DC))(this, targetObject);
	}

};

