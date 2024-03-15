#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RightMouseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RightMouseComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RightMouseComponent*, Il2CppObject*))(Il2CppBase() + 0x11A26BC))(this, targetObject);
	}

};

