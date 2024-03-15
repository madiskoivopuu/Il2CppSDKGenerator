#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapAlwaysVisibleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapAlwaysVisibleComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MinimapAlwaysVisibleComponent*, Il2CppObject*))(Il2CppBase() + 0x12D294C))(this, target);
	}

};

