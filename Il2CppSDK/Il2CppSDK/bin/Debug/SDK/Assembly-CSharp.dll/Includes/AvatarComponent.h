#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AvatarComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(AvatarComponent*, Il2CppObject*))(Il2CppBase() + 0xFB59F0))(this, targetObject);
	}

};

