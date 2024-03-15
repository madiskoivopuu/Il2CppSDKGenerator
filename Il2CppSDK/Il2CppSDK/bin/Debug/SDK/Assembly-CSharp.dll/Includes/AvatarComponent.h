#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AvatarComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AvatarComponent*, Il2CppObject*))(Il2CppBase() + 0xFB59F0))(this, targetObject);
	}

};

