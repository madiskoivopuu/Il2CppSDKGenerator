#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HoverMouseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HoverMouseComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(HoverMouseComponent*, Il2CppObject*))(Il2CppBase() + 0x1E33818))(this, targetObject);
	}

};

